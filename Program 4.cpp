/***************************************************************
Purpose: Calculate the average shooting percentage for the Chicago Blackhawks!
Let us understand using flags, setw's, and making the display look proffesional.
Added content (DLC): Make the user enter realistic data, no negatives. $29.99
The Expansion Pack: New loops and error checking methods. Explore a vast world
of changes coming to you faster and bigger than ever before. Free of charge!
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
// Set the flags:
cout << fixed << setprecision(1);

// Set variables in corresponding data types:
int goals, attemptedshots, gamecount, goalsum, attemptedshotsum, firstpercent;
float shootingpercent, percenttotal, change;
char choice;

// This bundle of code is added because not having it here would allow 1 of the variables to skyrocket to 4,000,000
// (can someone please explain this to me?)
goalsum = 0;
attemptedshotsum = 0;

// I need the program to execute once, no matter what so a do...while loop would fit:
do
  {

// Display and get user inputs, set while statements to allow only usable numbers:
  cout << "Number of goals made: ";
  cin >> goals;
  while (goals < 0)
    {
    cout << "Error: The Number Of Goals Cannot Be Less Than 0: Please Try Again: ";
    cin >> goals;
    }

  cout << "Number of shots attempted: ";
  cin >> attemptedshots;
  while (attemptedshots < 0)
    {
    cout << "Error: The Number Of Attempted Shots Cannot Be Less Than 0: Please Try Again: ";
    cin >> attemptedshots;
    }

// Once all numbers are real; get gamecounter rolling and get sums counted:
  gamecount++;
  goalsum += goals;                              // I want you use only one function for
  attemptedshotsum += attemptedshots;            // this set of data, so I only need sums.

// Math it up:
  shootingpercent = (goalsum / (float) attemptedshotsum) * 100 ;

// Display results with number of games given:
  cout << endl << "Shooting Percentage for " << gamecount << " game(s) " << gamecount << " is: "
  << shootingpercent << "%";

// Ask the user if they have anymore data:
  cout << endl << endl << endl << setw(9) << "Is there any more data? ( y/n ): ";
  cin >> choice;
  cout << endl << endl;

// Extra credit:
  if (gamecount == 1)
	{
	firstpercent += shootingpercent;
	}

  }

while(choice == 'y');

// Extra credit continuous:
change = (float) shootingpercent - firstpercent;

// Display results of all game totals:
cout << endl << "***********************************" << endl << endl
<< setw(20) << "Results" << endl << endl << "***********************************" << endl << endl
<< "Total Goals Made:"<< setw(18) << goalsum << endl << endl
<< "Total Attempted Shots:" << setw(13) << attemptedshotsum << endl << endl
<< "Total Shooting Percentage:" << setw(11) << shootingpercent << "%" << endl << endl
<< "The change in Team shooting percentage after " << gamecount << " games(s) is: " << change << "%" << endl << endl
<< "***********************************";

return 0; }

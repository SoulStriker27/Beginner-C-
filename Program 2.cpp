/***************************************************************
Purpose: Calculate the average shooting percentage for the Chicago Blackhawks!
Let us understand using flags, setw's, and making the display look proffesional.
Added content (DLC): Make the user enter realistic data. $29.99
***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
// Set the flags:
cout << fixed << setprecision(1);

// Set variables in corresponding data types:
int goals, attemptedshots;
float shootingpercent;

// Display and get user inputs (Make sure the values are usable):
cout << "Number of goals made: " ;
cin >> goals;
if (goals <= 0)
  {
  cout << "The Number Of Goals Cannot Be Less Than 0: Please try again:";
  cin >> goals;
  }

cout <<  endl << "Number of shots attempted: ";
cin >> attemptedshots;
if (attemptedshots <= 0)
  {
  cout << "The Number Of Attempted Shots Cannot Be Less Than 0: Please try again:";
  cin >> attemptedshots;
  }
if (attemptedshots <= goals)
  {
  cout << "The Number Of Attempted Shots Cannot Be Less Than\nThe Amount Of Goals Set: Please try again:";
  cin >> attemptedshots;
  }

// Math it up:
shootingpercent = (goals / (float) attemptedshots)*100;

// Display results:
cout << endl << "***********************************" << endl << endl
<< setw(20) << "Results" << endl << endl << "***********************************" << endl << endl
<< "Goals made:"<< setw(18) << goals << endl << endl
<< "Attempted Shots:" << setw(13) << attemptedshots << endl << endl
<< "Shooting Percentage:" << setw(11) << shootingpercent << "%" << endl << endl
<< "***********************************";

return 0; }

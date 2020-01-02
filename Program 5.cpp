/***************************************************************
Purpose: To determine the marginal benifit of working a random
set of finite days (1-30) at a random set wage that doubles after
each day of progressive day at work. And to set up a random number
generator to give me my values for this experiment.
***************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
//Set flags:
cout << setprecision(2) << right << fixed;

//Set symbolic constants:
const int MAX_STARTING_SALARY = 5;
const int MAX_DAYS = 30;

//Set up data variables in correspoding data types:
int daynum, count, daysworked;
double paynum, salarysum, job1, job2, job3;

//Set up random number generator for for loop:
srand(10);
paynum = (rand() % MAX_STARTING_SALARY + 1)*0.01;
daynum = rand() % MAX_DAYS + 1;

/*****************************************************************************************************/

//*Job 1*
//Display random pay and days worked:
cout <<  "**************Job 1****************" << endl << endl;
cout << "Your starting salary is: $" << paynum << endl;
cout << "Your number of days to work is: " << daynum << endl;

//Do a for loop to display amount earned in job 1:
daysworked = 0;
salarysum = 0;
cout << endl << "            Daily Salary    Amount Earned"; //Extra Credit
for(count = 0; count < daynum; count++)
  {
  daysworked++;
  cout << endl << "Day " << setw(2) << daysworked << ": " << setw(12) << paynum;
  salarysum += paynum;
  cout << setw(17) << salarysum; //Extra Credit
  paynum = paynum * 2;
  }
cout << endl << endl << "The amount earned for Job 1, in " << daysworked << " day(s) is: $" << salarysum;
job1 = salarysum;

/*****************************************************************************************************/

//*Job 2*
//Get another random number for a while loop:
paynum = (rand() % MAX_STARTING_SALARY + 1)*0.01;
daynum = rand() % MAX_DAYS + 1;

//Display random pay and days worked:
cout << endl << endl << endl <<  "**************Job 2****************" << endl << endl;
cout << "Your starting salary is: $" << paynum << endl;
cout << "Your number of days to work is: " << daynum << endl;

//Do a while loop to display amount earned in job 2:
daysworked = 0;
salarysum = 0;
count = 0;
cout << endl << "            Daily Salary    Amount Earned"; //Extra Credit
while(count < daynum)
	{
	count++;
	daysworked++;
	cout << endl << "Day " << setw(2) << daysworked << ": " << setw(12) << paynum;
	salarysum += paynum;
	cout << setw(17) << salarysum; //Extra Credit
	paynum = paynum * 2;
	}
cout << endl << endl << "The amount earned for Job 2, in " << daysworked << " day(s) is: $" << salarysum;
job2 = salarysum;

/*****************************************************************************************************/

//*Job 3*
//Get another random number for a do while loop:
paynum = (rand() % MAX_STARTING_SALARY + 1)*0.01;
daynum = rand() % MAX_DAYS + 1;

//Display random pay and days worked:
cout << endl << endl << endl <<  "**************Job 3****************" << endl << endl;
cout << "Your starting salary is: $" << paynum << endl;
cout << "Your number of days to work is: " << daynum << endl;

//Do a while loop to display amount earned in job 2:
daysworked = 0;
salarysum = 0;
count = 0;
cout << endl << "            Daily Salary    Amount Earned"; // Extra Credit
do
	{
	count++;
	daysworked++;
	cout << endl << "Day " << setw(2) << daysworked << ": " << setw(12) << paynum;
	salarysum += paynum;
	cout << setw(17) << salarysum; //Extra Credit
	paynum = paynum * 2;
	}
while(count < daynum);
cout << endl << endl << "The amount earned for Job 3, in " << daysworked << " day(s) is: $" << salarysum;
job3 = salarysum;
cout << endl << endl;

/*****************************************************************************************************/

//Extra Credit:
if (job1 > job2 and job1 > job3)
	{
	cout << "Job 1 was the highest paying job.";
	}
	else if(job2 > job1 and job2 > job3)
		{
		cout << "Job 2 was the highest paying job.";
		}
		else
			{
			cout << "Job 3 was the highest paying job.";
			}


return 0;}

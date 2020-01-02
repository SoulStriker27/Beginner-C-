/***************************************************************
Purpose: Make a program to make, sort, and display a set of randomly
generated arrays. Incorporate functions multiple times and use
arrays in meaningful ways.
***************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

//*************************Symbolic Constants**************************

const double LOWERBOUND = 0;
const double UPPERBOUND = 150;
const int MIN = 30;
const int MAX = 100;
const int MAXOUTPUT = 8;

//****************************Prototypes******************************

int buildArray(double[]);
double randDouble();
void printArray(double[],int,string);
void sortArray(double[],int,char);
double average(double[], int);
double standardDeviation (double[], int);

//******************************Main************************************

int main()
{

//Set Decimal places and Flags for presentation:

cout << fixed << setprecision(3) << right;

// Announce the arrays:

double FirstAR[MAX], SecondAR[MAX];

//Intergers to determine the amount of numbers in array:

int NumHold1, NumHold2;

//Declare extra credit:

double averageofarray, standardDeviationofarray;

//Confirgure random number generator:

srand(0);

//Start the Basic Profram Logic:

//Build the first array using random numbers, print it, sort it, and then print sorted array:

NumHold1 = buildArray(FirstAR);

printArray(FirstAR, NumHold1, "First Array -- Unsorted Random Numbers");

sortArray(FirstAR, NumHold1, 'A');

printArray(FirstAR, NumHold1, "First Array -- Sorted Random Numbers");

//Extra credit:

averageofarray = average(FirstAR, NumHold1);

standardDeviationofarray = standardDeviation (FirstAR, NumHold1);

cout << endl << endl << " First Array: " << endl <<
						" Smallest Number: " << setw(10) << FirstAR[0] << endl <<
						" Largest Number: " << setw(11) << FirstAR[NumHold1 - 1] << endl <<
						" Average: " << setw(18) << averageofarray << endl <<
						" Standard Deviation: " << setw(7) << standardDeviationofarray;

//Build the second array using random numbers, print it, sort it, and then print sorted array:

NumHold2 = buildArray(SecondAR);

printArray(SecondAR, NumHold2, "Second Array -- Unsorted Random Numbers");

sortArray(SecondAR, NumHold2, 'D');

printArray(SecondAR, NumHold2, "Second Array -- Sorted Random Numbers");

//Extra Credit:

averageofarray = average(SecondAR, NumHold2);

standardDeviationofarray = standardDeviation (SecondAR, NumHold2);

cout << endl << endl << " Second Array: " << endl <<
						" Smallest Number: " << setw(10) << SecondAR[NumHold2 - 1] << endl <<
						" Largest Number: " << setw(11) << SecondAR[0] << endl <<
						" Average: " << setw(18) << averageofarray << endl <<
						" Standard Deviation: " << setw(7) << standardDeviationofarray;

return 0;
}

//**************************Functions**********************************

/***************************************************************
Function Name: randDouble
Functionality: Get a random number
Arguments:     None
Returns:       Double, random number
***************************************************************/

double randDouble()
{
double result;
result = (LOWERBOUND + (rand() / (RAND_MAX / (UPPERBOUND - LOWERBOUND)))); //Get random double number
return result;
}

/***************************************************************
Function Name: buildArray
Functionality: Build an array by inserting a random values a
               random set amount of times
Arguments:     A double Array
Returns:       The number of values in array (And a built array)
***************************************************************/

int buildArray(double array[])
{
int num;
num = (MIN + (rand() % (MAX - MIN + 1))); //Get the number of values in the array
for(int a = 0; a < num; a++)
  {
  array[a] = randDouble();                //Put random values into array
  }
return num;
}

/***************************************************************
Function Name: printArray
Functionality: Display array in rows of 8
Arguments:     double array, number of values in array, and the
               title to distiguish from diffrent uses
Returns:       None/Void
***************************************************************/

void printArray(double array[], int NumOfValues, string title)
{
cout << endl << endl << title << " -- " << NumOfValues << " values " << endl;
for(int subprint = 0; subprint < NumOfValues; subprint++)
	{
    cout << setw(10) << array[subprint];
    if ( (subprint+1) % MAXOUTPUT == 0)     //If modulus division remainder is 0, then it is divisable by 8
  		{                                   //so you start a new line character
         cout << endl;
  		}
	}
}

/***************************************************************
Function Name: sortArray
Functionality: Sort the array in ascending or descending order
               specified by program
Arguments:     Double array, the number of values in array,
               and the choice of ascending or descending
Returns:       None/Void
***************************************************************/

void sortArray(double array[], int NumOfValues, char sortType)
{
double temp = 0;
if(sortType == 'A')
	{
    for(int subascend = 0; subascend < NumOfValues; subascend++)
    	{
        double lownum = subascend;
        for(int subascend2 = (lownum + 1); subascend2 < NumOfValues; subascend2++ )
      	   {
            if( array[subascend2] < array [subascend])              //Test if next number is lower than the tested number
            	{
                temp = array [subascend];                           //Replace temp with the tested number
                array [subascend] = array [subascend2];             //Replace the test number with new (lower) number
                array [subascend2] = temp;                          //Fully complete the switch of array numbers
            	}
        	}
    	}
	}
else if(sortType == 'D')
	{
    for(int subdescend = 0; subdescend < NumOfValues; subdescend++)
    	{
        double highnum = subdescend;
        for(int subdescend2 = (highnum + 1); subdescend2 < NumOfValues; subdescend2++ )           //Test if next number is higher than the tested number
        	{
            if( array[subdescend2] > array [subdescend])
            	{
                temp = array [subdescend];                                                        //Replace temp with the tested number
                array [subdescend] = array [subdescend2];                                         //Replace the test number with new (Higher) number
                array [subdescend2] = temp;                                                       //Fully complete the switch of array numbers
            	}
        	}
   	   }
	}
}

/***************************************************************
Function Name: average
Functionality: Calculate the average of the array
Arguments:     Double array, the number of values in array
Returns:       double, the average
***************************************************************/

double average(double array[], int numberOfValues)
{
double sum = 0;
double average = 0;
for(int subavg = 0; subavg < numberOfValues; subavg++)
	{
	sum += array[subavg];                               // Add up the array
	}
average = sum / numberOfValues;
return average;
}

/***************************************************************
Function Name: standardDeviation
Functionality: Calculate the standard deviation of the array
Arguments:     Double array, the number of values in array
Returns:       double, the standard deviation
***************************************************************/

double standardDeviation (double array[] , int numberOfValues)
{
double sumOfSquared = 0;
double sumSquared = 0;
double deviation = 0;
for ( int subdev = 0; subdev < numberOfValues; subdev++)     //Get the sum of each number in array squared
	{
	sumOfSquared += array[subdev] * array[subdev];
	}
for ( int subdev2 = 0; subdev2 < numberOfValues; subdev2++) //Add up the sum of each number in the array to later square
	{
	sumSquared += array[subdev2];
	}
sumSquared = sumSquared * sumSquared;                       //Square sum of the array
deviation = sqrt((sumOfSquared - ( sumSquared / numberOfValues)) / ( numberOfValues - 1) ); //Use sqrt() Function in <cmath> libraby
return deviation;
}

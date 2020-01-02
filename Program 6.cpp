/***************************************************************
Purpose: This program performs simple arithmetic calculations and
         displays the results. And use other means of gathering data.
***************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
char operation;
int num1, num2, result, remain;

// Set up the Math.txt to input variables:

ifstream infile;
infile.open( "math.txt" );

if( infile.fail() )
  {
  cout << "input file did not open" << endl;
  exit(-1);
  }

//Prototypes:

int addition(int value1, int value2);
int subtraction (int value1, int value2);
int multiplication (int value1, int value2);
int quotient(int value1, int value2);
int remainder(int value1, int value2);
int power(int base, int powerValue);
int factorial(int value);

//While the infile has data:

while (infile)
	{

	infile >> operation;

	switch(operation)
	  {
	    //Addition operation

	  case '+':
	    {
	    //Get two numbers from the infile:

	    infile >> num1;
	    infile >> num2;

	    //Add the numbers together
	    result = addition (num1, num2);

	    //Display the result of the addition
	    cout << endl << num1 << " + " << num2 << " = " << result;
	    break;
	    }
	 //Subtraction operation

	  case '-':
	    {
	    //Get two numbers from the infile:

	    infile>> num1;
	    infile>> num2;

	    //Subtract the second number from the first number
	    result = subtraction(num1, num2);

	    //Display the result of the subtraction
	    cout << endl << num1 << " - " << num2 << " = " << result;
	    break;
	    }

	  //Multiplication operation

	  case '*':
	    {
	    //Get two numbers from the infile

	    infile>> num1;
	    infile>> num2;

	    //Multiply the numbers together
	    result = multiplication (num1, num2);

	    //Display the result of the multiplication
	    cout << endl << num1 << " * " << num2 << " = " << result;
	    break;
	    }

	  //Division operation

	  case '/':
	    {
	    //Get two numbers from the infile

	    infile>> num1;
	    infile>> num2;

	    //Divide the first number by the second number, calculating both the quotient
	    //and the remainder
	    result = quotient(num1, num2);
	    remain = remainder(num1, num2);

	    //Display both results of the division
	    cout << endl << num1 << " / " << num2 << " = " << result
	         << endl << num1 << " % " << num2 << " = " << remain;
	    break;
	    }

	  //Exponentiation operation (number raised to a power)

	  case '^':
	    {
	    //Get two numbers from the infile. The first number is the base value. The second
	    //number is the power.

	    infile>> num1;
	    infile>> num2;

	    //Calculate the result of raising the first number (num1) to a power (the
	    //second number)

	    result = power(num1, num2);

	    //Display the result
	    cout << endl << num1 << "^" << num2 << " = " << result;
	    break;
	    }

	  //Factorial operation
	  case '!':
	    {
	    //Get the number to use in the calculation from the infile

		infile>> num1;

	    //Calculate the result of multiplying 1 times each value through the number
	    //entered by the user.

	    result = factorial (num1);

	    //Display the result
	    cout << endl << num1 << "! = " << result;
	    break;
	    }

	  //Invalid operation
	  default:
	    {
	    //Ignore invalid operations in text:
	    infile.ignore( 100, '\n' );
	    cout << endl << "This is an invalid operation!";
	    }
	  }
	  cout << endl;

	}

return 0;
}

// After Main () write the functions:

/***************************************************************
Function: int addition()

Use: To add 2 set values together

Arguments: 2 integers

Returns: 1 integer

Note: Basic kindergartener stuff
***************************************************************/

int addition (int val1, int val2)
  {
    return  (val1 + val2);
  }

/***************************************************************
Function: int subtraction()

Use: To subtract 1 number from another

Arguments: 2 integers, base value then subtracting value

Returns: 1 integer

Note: 1st grade level math
***************************************************************/

int subtraction ( int val1, int val2)

  {
    return (val1 - val2);
  }

/***************************************************************
Function: int multiplication()

Use: To multiply 2 numbers together

Arguments: 2 integers

Returns: 1 integer

Note: 2nd grade stuff right here
***************************************************************/

int multiplication(int val1, int val2)
  {
    return (val1 * val2);
  }

/***************************************************************
Function: int quoitent()

Use: Divide one number from another

Arguments: 2 integers, first variable divided by the second variable

Returns: 1 integer

Note: Second number cannot be 0. Now we're getting into the real stuff (3rd grade)
***************************************************************/

int quotient(int val1, int val2)
  {
    return ( val1 / val2);
  }

/***************************************************************
Function: int remainder()

Use: To get the remainder from the quotient operation doing modulus division

Arguments: 2 integers, first variable divided by the second variable to get a remainder

Returns: 1 integers

Note: I don't remember learning this. So I'ama going to say 4th grade magic
***************************************************************/

int remainder(int val1, int val2)
  {
    return (val1 % val2);
  }

/***************************************************************
Function: int power()

Use: To get a value and raise it to the n'th power

Arguments: 2 integers, the first varible and then power it by the second variable

Returns: 1 (possibly very long) integer

Note: for loop needed. 5th graders couldn't answer this on their own show
***************************************************************/

int power(int val1, int val2)
  {
  int result = 1;
  for( int cnt = 1; cnt <= val2; cnt++ )
   {
    result *= val1;
   }
  return result;
  }

/***************************************************************
Function: int factorial()

Use: Muliply all the numbers leading up to the integer together

Arguments: 1 integer, Multiply each number leading up to the variable

Returns: 1 integer

Note: for loop needed. Holy... Mother of Multiplication. THIS IS COLLEGE!!!
***************************************************************/

int factorial (int val1)
  {
  int result = 1;
  for( int cnt = 2; cnt <= val1 ; cnt++)
   {
   result *= cnt;
   }
   return result;
  }

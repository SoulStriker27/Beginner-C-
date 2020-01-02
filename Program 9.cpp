/***************************************************************
Purpose: Develope skills involving classes and the string category
of data. Using new concepts such as strncpy and strcmps.
***************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>

using namespace std;

class Coin
{
  public:

//Constructors:

    Coin();
    Coin(double newValue);

//Class protoypes:

    void toss();

    int getSide();

    double getValue();

//Data Members:

    double value;
    char side[5];

};

int main()
{

//Set 2 places out of decimal

cout << fixed << setprecision(2);

//Set random number generator:

srand(11);

//Create class objects:

Coin nickel(0.05);
Coin dime(0.1);
Coin quarter(0.25);

double balance = 0;                   //Balance the player has

//Write a loop for the game:

while( balance <= 1.0)
{
cout << "Your current balance is $" << balance << endl << endl;

nickel.toss();                                                  //Nickle toss
if (nickel.getSide() == 1)
	{
	balance += nickel.getValue();
	}
cout << "Nickel:" << setw(8) << nickel.side << endl;

dime.toss();                                                     //Dime toss
if (dime.getSide() == 1)
	{
	balance += dime.getValue();
	}
cout << "Dime:" << setw(10) << dime.side << endl;

quarter.toss();                                                  //Quarter toss
if (quarter.getSide() == 1)
	{
	balance += quarter.getValue();
	}
cout << "Quarter:" << setw(7) << quarter.side << endl << endl;

cout << "********************************" << endl << endl;
}

//Display final balance and win/lose message:

cout << "The final balance is $" << balance << ".";

if ( balance == 1.00)
	{
	cout << "You Won!";
	}
else
	{
	cout << "You lost.";
	}

return 0;
}

//Class Coin Methods:

/*****************************************************************
Method Name: Coin::Coin()
Method Arguments: Nothing
Method Functionality: Basic constructer, sets values at 0.01, and
sets the first coin toss
Method Return: Nothing
******************************************************************/

Coin::Coin()
  {
  value = 0.01;
  toss();
  }

/*****************************************************************
Method Name: Coin::Coin (double)
Method Arguments: A double, new value for coin
Method Functionality: Set up a new value for the coin
Method Return: Nothing
******************************************************************/

Coin::Coin(double newValue)
  {
  value = newValue;
  toss();
  }

/*****************************************************************
Method Name: Coin::toss()
Method Arguments: Nothing
Method Functionality: Get a random "coin flip"
Method Return: Nothing
******************************************************************/

void Coin::toss()
  {
  int temp = (rand() % 2 ) + 1;
  if ( temp == 1)
    {
    strcpy (Coin::side, "heads" );
    }
  if ( temp == 2)
    {
    strcpy( Coin::side, "tails");
    }
  }

/*****************************************************************
Method Name: Coin::getSide()
Method Arguments: Nothing
Method Functionality: Transfer a string variable into an integer
Method Return: Integer, the converted "heads" or "tails" result
******************************************************************/

int Coin::getSide()
  {
  if (strcmp( Coin::side,"heads") == 0)
    {
    return 1;
    }
  if (strcmp(Coin::side, "tails") == 0)
    {
    return 2;
    }
  }

/*****************************************************************
Method Name: Coin::getValue
Method Arguments: Nothing
Method Functionality: Access the value data member in the Class
Method Return: Double, the value stored for the coin
******************************************************************/

double Coin::getValue()
  {
  return value;
  }

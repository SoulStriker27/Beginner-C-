/***************************************************************
Purpose: Use classes and methods to show the functioning steps of
an elevator.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//Classes:


class Elevator
{
	public:

		//Constructors:

		Elevator()
			{
			currentfloor = LOWER_FLOOR;
			};
		Elevator(int startingfloor)
			{
			currentfloor += startingfloor;
			};

		//Public methods:

		/*************************************************************************************
		Method Name: request
		Method Arguments: interger; floor to go to
		Method Functionality: analize the floor to get to and see if it is applicable to further
		functions, then transfer or display diffrent message
		Method Returns: nothing
		**************************************************************************************/
		void request(int newFloor)
		{
		if ( newFloor <= TOP_FLOOR && newFloor >= LOWER_FLOOR)
			{
			if(newFloor > currentfloor )
				{
				goUp(newFloor);
				}
			else if(newFloor < currentfloor)
				{
				goDown(newFloor);
				}
			else if(newFloor == currentfloor)
				{
				cout << "The Elevator is already at the location you request" << endl << endl;
				}
			}
		else
			{
			cout << endl << "The request is invalid, please try again" << endl << endl;
			}
		}

		/*************************************************************************************
		Method Name: getCurrrentFloor
		Method Arguments: None
		Method Functionality: Update currentfloor with the methods using the data_member
		Method Returns: interger: the current floor
		**************************************************************************************/

		int getCurrentFloor()
			{
			return currentfloor;
			}

		//Data Members:

		int currentfloor = 0;

		//Constants:

		static const int TOP_FLOOR;
		static const int LOWER_FLOOR;

	private:

		//Private methods:

		/*************************************************************************************
		Method Name: doDown
		Method Arguments: interger; the new low floor to get to
		Method Functionality: do a loop to get to new lower floor
		Method Returns: none
		**************************************************************************************/

		void goDown ( int lowerFloor)
			{
			cout << "Starting at floor #" << currentfloor << endl;
			for ( currentfloor -= 1; currentfloor > lowerFloor; currentfloor-- )
				{
				cout << "Going Down -- now at floor #" << currentfloor << endl;
				}
			cout << "Welcome to floor #" << currentfloor << endl << endl;
			}

		/*************************************************************************************
		Method Name: goUp
		Method Arguments: integer; the new highest floor
		Method Functionality: do a loop to get to new higher floor
		Method Returns: none
		**************************************************************************************/

		void goUp ( int higherFloor)
			{
			cout << "Starting at floor #" << currentfloor << endl;
			for ( currentfloor += 1; currentfloor < higherFloor; currentfloor++ )
				{
				cout << "Going Up -- now at floor #" << currentfloor << endl;
				}
			cout << "Welcome to floor #" << currentfloor << endl << endl;
			}

};

//Initialize the constants value outside the class definition:

const int Elevator::TOP_FLOOR = 15;
const int Elevator::LOWER_FLOOR = 1;

//Main:

int main ()
{
//Use the first constructor:

Elevator FirstFloor;

//First elevator object:

cout << "The First Elevator Object" << endl << endl;

//Give first elevator instructions:


FirstFloor.request(10);
FirstFloor.request(5);
FirstFloor.request(5);
FirstFloor.request(15);
FirstFloor.request(1);

//Use the second constructer:

Elevator StartingFloor6(6);

//Second elevator object:

cout << "The Second Elevator Object" << endl << endl;

//Give second elevator instructions:

StartingFloor6.request(1);
StartingFloor6.request(13);
StartingFloor6.request(-4);

//Get current floor:

int current = StartingFloor6.getCurrentFloor();

cout << "The Elevator Is Currently On Floor #" << current;

//No extra credit :'(

return 27;
}

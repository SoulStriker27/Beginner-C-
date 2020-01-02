#include <iostream>
#include <iomanip>


using namespace std;

int cost(int, int, int);
int boardcost(int, int);
bool checksize(int, int);




int main()
{
	
int numTent, numRoom, rent, utilities, totalcost;

cout << "Enter number of tenants: ";
cin >> numTent;
cout << endl << " Enter number of rooms :";
cin >> numRoom;
cout << endl << "Enter rent amount: ";
cin >> rent;
cout << endl << "Enter utilities amount: ";
cin >> utilities;

cout << endl;

totalcost = boardcost(rent, utilities);

cost(numTent, numRoom, totalcost);


}



int boardcost(int x, int y)
{
	return (x + y);
}



int cost(int tenants, int rooms, int totalcost)
{
	int roomcost = 0;
	int normalcost = 0;
	int reducedprice = 0;
	bool check = checksize(tenants, rooms);
	if( tenants <= rooms)
	{
		roomcost = totalcost / (double) tenants;
		cout << "Cost of each roommate is: $" << roomcost;
		return 0;
	}
	else  if ( tenants > rooms and tenants == check)
	{

		over = tenants - rooms;
		normalcost = ((rooms - over) * ( totalcost/ (double) tenants) + (utilities/tenants)   ;
		
	}
	else 
	{
		cout << "Damn dude quit beaner packing this house!";
		return 0;
	}
}



bool checksize(int tenants, int rooms)
{
	if ( tenants < rooms*2)
	{
		return true;
	}
	else if ( tenants > rooms*2)
	{
		return false;
	}
}

  
  
  
  
  
  
  
  
  


/***************************************************************
Purpose: The purpose of this program is to calculate compound
         interest over a 4 year period. The user is prompted
         for the initial investment amount and the annual interest
         rate for the investment.
***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
double Investment1 , ValueY1 , ValueY2 , ValueY3 , ValueY4 , ValueY5 , Interest1;

cout << "\nEnter Invesment Amount:    "  ;
cin >> Investment1 ;

cout << "\nEnter Interest Rate:       "  ;
cin >> Interest1 ;

ValueY1 = Investment1 + (Investment1 * Interest1 / 100.0);
ValueY2 = ValueY1 + (ValueY1 * Interest1 / 100.0);
ValueY3 = ValueY2 + (ValueY2 * Interest1 / 100.0);
ValueY4 = ValueY3 + (ValueY3 * Interest1 / 100.0);
ValueY5 = ValueY4;

cout << "\n***********************************************\n" ;
cout << "\n             Investment Results" ;
cout << "\n\n***********************************************\n" ;
cout << "\n\nInitial Investment:        " << Investment1 ;
cout << "\n\nInterest Amount:           " << Interest1 ;
cout << "\n\nFive Year Invesment Value: " << ValueY5;
cout << "\n\nFROM YOUR TRUSTED BANK: CHASE(tm)" ;

return 0;
}

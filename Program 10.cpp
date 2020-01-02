/***************************************************************
Purpose: Finish our understanding of classes and methods in a multitude of ways.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
public:
  //Constructors
  Rectangle();
  Rectangle(int height, int width);

  //Method prototypes:
  void setDimensions(int newHeight, int newWidth);
  int getHeight();
  int getWidth();
  void getDimensions(int &heightRef, int &widthRef);
  void draw();
  void display();
  bool isSquare();
  bool isEqual(Rectangle otherRec);

  //Data members:
  int height;
  int width;
};

//Main:

int main()
{
//Create 5 Rectangle objects using the two constructors
Rectangle rectangle1(10, 32),
          rectangle2(21, 8),
          rectangle3,
          rectangle4(3, 33),
          rectangle5(3, 33);


//Test 1: display the first rectangle object
cout << "*** Test 1: display the first Rectangle object ***" << endl << endl;

rectangle1.display();


//Test 2: display the height of the first rectangle object
cout << endl << endl << endl
     << "*** Test 2: display ONLY the height of the first Rectangle object ***"
     << endl << endl;

cout << "The height of the rectangle is " << rectangle1.getHeight() << endl;


//Test 3: display the width of the second rectangle object
cout << endl << endl << endl
     << "*** Test 3: display ONLY the width of the second Rectangle object ***"
     << endl << endl;

cout << "The width of the rectangle is " << rectangle2.getWidth() << endl;


//Test 4: getDimensions and setDimensions
int rectHeight, rectWidth;

cout << endl << endl << endl
     << "*** Test 4: get the dimensions of the third Rectangle object ***"
     << endl << endl;

rectangle3.getDimensions( rectHeight, rectWidth );

cout << "The height of the rectangle is " << rectHeight << endl
     << "The width of the rectangle is " << rectWidth << endl << endl;

rectangle3.setDimensions(12, 12);

rectangle3.getDimensions( rectHeight, rectWidth );

cout << "After changing the dimensions..." << endl << endl
     << "The height of the rectangle is " << rectHeight << endl
     << "The width of the rectangle is " << rectWidth << endl << endl;


//Test 5: isSquare
cout << endl << endl << endl
     << "*** Test 5: are the third and fourth Rectangle objects squares? ***"
     << endl << endl;

if( rectangle3.isSquare() )
  cout << "The third rectangle is a square." << endl;
else
  cout << "The third rectangle is NOT a square." << endl;

if( rectangle4.isSquare() )
  cout << endl << "The fourth rectangle is a square." << endl;
else
  cout << endl << "The fourth rectangle is NOT a square." << endl;


//Test 6: isEqual
cout << endl << endl << endl
     << "*** Test 6a: are the fourth and first Rectangle objects equal? ***"
     << endl << endl;

if( rectangle4.isEqual( rectangle1) )
  cout << "The fourth rectangle is equal to the first rectangle." << endl;
else
  cout << "The fourth rectangle is NOT equal to the first rectangle." << endl;

cout << endl << endl << endl
     << "*** Test 6b: are the fourth and fifth Rectangle objects equal? ***"
     << endl << endl;

if( rectangle4.isEqual( rectangle5) )
  cout << "The fourth rectangle is equal to the fifth rectangle." << endl;
else
  cout << "The fourth rectangle is NOT equal to the fifth rectangle." << endl;


//Test 7: draw
cout << endl << endl << endl
     << "*** Test 7: draw the fourth and fifth Rectangle objects ***"
     << endl << endl;

cout << "The fourth Rectangle object" << endl;

rectangle4.draw();

cout << endl << endl << "The fifth Rectangle object" << endl;

rectangle5.draw();

return 0;
}


//Class methods

/*****************************************************************
Method Name: Rectangle::Rectangle()
Method Arguments: None
Method Functionality: The constructor, set values at 1
Method Return: none
******************************************************************/

Rectangle::Rectangle()
	{
	Rectangle::height = 1;
	Rectangle::width = 1;
	}

/*****************************************************************
Method Name: Rectangle:Rectangle()
Method Arguments: the height and the width
Method Functionality: set height and width for the boxes
Method Return: none
******************************************************************/

Rectangle::Rectangle(int height, int width)
	{
	Rectangle::setDimensions(height, width);
	}

/*****************************************************************
Method Name: Rectangle::setDimensions()
Method Arguments: newhhight and newwidth
Method Functionality: make sure height and width have funtunal values
and place the new intergeres in their proper spot
Method Return: none
******************************************************************/

void Rectangle::setDimensions(int newHeight, int newWidth)
  {
  if(newHeight < 1)
    {
    Rectangle::height = 1;
    }
  else
    {
    Rectangle::height = newHeight;
    }
  if(newWidth < 1)
    {
    Rectangle::width = 1;
    }
  else
    {
    Rectangle::width = newWidth;
    }
  }

/*****************************************************************
Method Name: Rectangle::getHeight()
Method Arguments: none
Method Functionality: get height value
Method Return: integer, the height value
******************************************************************/

int Rectangle::getHeight()
  {
  return Rectangle::height;
  }

/*****************************************************************
Method Name: Rectangle::getWidth()
Method Arguments:  none
Method Functionality: get the width value
Method Return:  integer, the width value
******************************************************************/

int Rectangle::getWidth()
  {
  return Rectangle::width;
  }

/*****************************************************************
Method Name: Rectangle::getDimensions()
Method Arguments: the address of the height and width refrences
Method Functionality: return numbers back into the values sent in
Method Return: none technically
******************************************************************/

void Rectangle::getDimensions(int &heightRef, int &widthRef)
  {
  heightRef = Rectangle::height;
  widthRef = Rectangle::width;
  }

/*****************************************************************
Method Name:Rectangle::Draw()
Method Arguments: none
Method Functionality: Draw the rectangle (Had plain difficulty with this step)
Method Return: none
******************************************************************/

void Rectangle::draw()
  {
  cout << endl << endl;
  for(int sub = 1; sub <= Rectangle::height; sub++)
    {
    if(sub == 1 or sub == Rectangle::height)
      {
      for(int sub2 = 1; sub2 <= Rectangle::width; sub2++)
        {
        cout << "#";
        }
      cout << endl;
      }
    if(sub > 1 and sub < Rectangle::height)
      {
      for ( int sub3 = 1; sub3 <=  Rectangle::width; sub3++ )
      	{
      	if ( sub3 == 1 or sub3 ==  Rectangle::width)
      		{
      		cout << "#";
			}
		else
			{
			cout << " ";
			}
		}
	  cout << endl;
      }
    }
  }

/*****************************************************************
Method Name: Rectanlgle::display()
Method Arguments: none
Method Functionality: Display height and width and dray the rectangle
Method Return: none
******************************************************************/

void Rectangle::display()
	{
	cout << "Height: " << Rectangle::getHeight() << setw(5)<< " " << "Width: " << Rectangle::getWidth();
	Rectangle::draw();
	}

/*****************************************************************
Method Name: Rectangle::isSquare()
Method Arguments: none
Method Functionality: is the box a square
Method Return: True/False
******************************************************************/

bool Rectangle::isSquare()
	{
	if ( Rectangle::getHeight() == Rectangle::getWidth())
		{
		return 1;
		}
	else
		{
		return 0;
		}
	}

/*****************************************************************
Method Name:Rectangle::isEqual()
Method Arguments: the Object otherRec
Method Functionality: test wether or not 2 boxes were equal in both height and width
Method Return: True/False
******************************************************************/

bool Rectangle::isEqual(Rectangle otherRec)
	{
	if(Rectangle::getHeight() == otherRec.height and Rectangle::getWidth() == otherRec.width)
		{
		return 1;
		}
	else
		{
		return 0;
		}
	}

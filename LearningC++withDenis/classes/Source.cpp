/***************************************************************************************
* ***   A c++ program to demostrate usage of classes in c++
* 
*      Author : Denis Muriungi
*      Email  : Dennzriush@gmail.com
******/
#include<iostream>
#include<conio.h>

using namespace std;

/******************************************************************
***  In c++ classes are struct are identical
*   differences bwetwween structs and class
*    ---------------------------------------------------------------------------------
*    | stucts                         |      classes                           |
________________________________________________________________________________
*    | default access specifiers are  |    default access specifiers are        |
*    |  public                        |    private                             |
* ---------------------------------------------------------------------------------
* 
*   @class syntax
*     class name{
*        access specifier:
* 
*        name();
*        ~name();
* 
*        member1;
*        member2;
*     };
****/
class Shape {
	int a, b;
public:

	Shape(int _length, int _width)
	{
		a = _length;
		b = _width;

		std::cout << "Length is: " << a << " width is: " << b << std::endl;
	}

	void area()
	{
		std::cout << "The are is: " << a * b << std::endl;
	}
};

int main()
{
	Shape square(8, 8);
	square.area();

	Shape rectagle(26, 8);
	rectagle.area();

	_getch();
	return 0;
}
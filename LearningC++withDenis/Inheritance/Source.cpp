/***********************************************************************************************
* **  A c++ program to demostrate inheritance
* 
*     Author : Denis Muriungi
*     E-mail : Dennzriush@gmail.com
******/

#include<iostream>
#include<conio.h>

using namespace std;

/************************************************************************************************
****
*    Inheritance help us to create classes that are derived from other classes
* 
*       @Inherintance syntax
*       class InherintedClassName: accessSpecifier parentClassName{
*      
*        };
****************/

class Shape {

protected:
	float a, b;
public:
	void setValues(float _length, float _width)
	{
		a = _length;
		b = _width;
		std::cout << "The length is: " << a << " width is: " << b << std::endl;
	}

	void area()
	{
		std::cout << "The area is: " << a * b << std::endl;
	}
};

//Inheritance
class Triangle : public Shape {
public:
	void area()
	{
		std::cout << "The area of the triangle is: " << 0.5f * a * b << std::endl;
	}
};

int main()
{
	Shape rectangle;
	rectangle.setValues(6.0f, 8.0f);
	rectangle.area();

	Triangle tri;
	tri.setValues(3.0f, 23.0f);
	tri.area();

	_getch();
	return 0;
}
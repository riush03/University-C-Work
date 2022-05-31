/**************************************************************************************************************
****************
*  A c++ program to demostrate how to use functions in a program
* 
*  Author : Denis Muriungi
*  Email  : Dennzriush@gmail.com
**********************************************************************************************************/
#include<iostream>
#include<conio.h>

using namespace std;

/*****************************************************************************************
**  Function helps us to break our code up into smaller, manageable chunks
* 
*    @syntax for function
*     typename function name(param1,param2) { statement }
* 
************/

//let make a simple calculator program

//a function to add two integers
void add(int a, int b)
{
	int c = a + b;
	std::cout << "The sum of " << a << " and " << b << " is " << c << std::endl;
}

void substract(int a, int b)
{
	int c = a - b;
	std::cout << "The difference btween  " << a << " and " << b << " is " << c << std::endl;
}

void multiply(int a, int b)
{
	int c = a * b;
	std::cout << "The mutlipication of " << a << " and " << b << " is " << c << std::endl;
}

void division(int a, int b)
{
	int c = a / b;
	std::cout << "The division of  " << a << " and " << b << " is " << c << std::endl;
}

int main()
{
	int x = 28;
	int y = 17;

	add(x, y);
	substract(x, y);
	multiply(x, y);
	division(x, y);
	_getch();
	return 0;
}
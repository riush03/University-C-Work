/************************************************************************************************
*  A c++ program to demostrate the usage of pointers
* 
*   Author: Denis Muriungi
*   E-mail: Dennzriush@gmail.com
***************/
//include the header files
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/*******************************
	*  Pointers are variables that store the adress or reference of another variable
	*   how to declare pointers exampe
	*    int age = 18;
	*    int *location = &age;
	*****/

	int age = 18;
	int *location = &age;

	std::cout << location << std::endl;
	_getch();
	return 0;
}
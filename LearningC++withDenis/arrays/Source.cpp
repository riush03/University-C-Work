/*******************************************************************************************************************
**** A c++ program to demostrate usage of arrays
* 
*    Author : Denis Muriungi
*    E-mail : Dennzriush@gmail.com
*
******************************************************************************************************************/
//include header files
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/************************************************
	*  Arrays are used to organize data in a better way.
	*  Arrays use continous memory space to store values in series and you can access each element
	* with an index number
	* 
	*   @arrays syntax
	*    type name[size] = {value0,.....};
	*************************************************/
	int fruits[5] = { 23,6,7,8,8 };

	std::cout << "Element of the 0th index " << fruits[0] << std::endl;
	std::cout << "Element of the 4th index " << fruits[3] << std::endl;

	_getch();
	return 0;
}
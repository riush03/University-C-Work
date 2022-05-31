/********************************************************************************
**   Program to demostrate usage of switch statement
*   Author: Denis Muriungi
*   E-mail: Dennzriush@gmail.com
**************************************************************************************/
#include<iostream>
#include<conio.h>
/***
*  The continue statement will skip the current iteration and 
* continue with tthe execution of the statement till the loop
* ends
**/
using namespace std;

int main()
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 5)
		{
			std::cout << "continue counting" << std::endl;
			continue;
		}
		std::cout << "The value of i is " << i << std::endl;
	}
	_getch();
	return 0;
}
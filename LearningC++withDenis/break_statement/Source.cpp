/****************************************************************************************************
***  A program to demostrate usage of break statement
*    Author: Denis Muriungi
*    Email: Dennzriush@gmail.com
*********************************************************************************************/

//include the header files
#include<iostream>
#include<conio.h>

/********************************************************************************
***  Jump statements are :
*        1. break
*        2. continue
* 
*    break -> is used to break out of an iteration
***********************************************/

using namespace std;

int main()
{
	for (int n = 0; n <= 10; n++)
	{
		if (n == 5)
		{
			std::cout << "Break" << std::endl;
			break;
		}
		std::cout << " The value of n is " << n << std::endl;
	}
	return 0;
}


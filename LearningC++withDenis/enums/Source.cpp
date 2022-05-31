/****************************************************************************************************
**  A c++ program to demostrate the usage of enums
*   
*   Author:  Denis Muriungi
*   E-mail:  Dennzriush@gmail.com
***/
#include<iostream>
#include<conio.h>

using namespace std;

/********************************************************************************************************
**   Enums are used for enumarating items in a list
*  
*    @enum syntax
*    enum name{
*         value1,
*         value2,
*         ....
*      };
**/
enum weekDays {
	Monday = 0,
	Tuesday,
	Wenesday,
	Thursday,
	Friday,
	Saturday,
	Sunday,
};

int main()
{
	weekDays today;

	today = Friday;

	if (today == Friday)
	{
		std::cout << " The weekend is here ..!" << std::endl;
	}

	_getch();
	return 0;
}
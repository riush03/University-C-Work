/********************************************************************************************************
* A program to show usage of arrays and iterating them
* 
*   Author: Denis Muriungi
*   Email: Dennzriush@gmail.com
* 
***********/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int fruit[5] = { 45,78,65,43,8 };

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Element at the " << i << "th index is: " << fruit[i] << std::endl;
	}
	_getch();
	return 0;
}
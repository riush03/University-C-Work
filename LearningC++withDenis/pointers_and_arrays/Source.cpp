/*****************************************************************
* **  A c++ program to demostrante the usage of arrays and pointers together
*     Author: Denis Muriungi
*     E-mail: Dennzriush@gmail.com
******/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int* p = nullptr;
	int fruits[5] = { 45,56,43,87,448 };
	p = fruits;

	std::cout << *p << std::endl;
	p++;
	std::cout << *p << std::endl;
	std::cout << *(p + 3) << std::endl;
	std::cout << *p << std::endl;
	_getch();
	return 0;
}
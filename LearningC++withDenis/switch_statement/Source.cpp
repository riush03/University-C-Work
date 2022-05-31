/*******
* 
*  A c++ program to demostrate the usage of switch statement in c++
*    Author: @Denis Muriungi
*    E-mail: Dennzriush@gmail.com
**/

//include the header files
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/******8
	* The swithc statement check for several cases and if there values matches
	****/
	int a = 28;

	switch (a)
	{
	case 1:
		std::cout << "The value of a is " << a << std::endl;
		break;
	case 2:
		std::cout << "The value of a is " << a << std::endl;
		break;
	case 3:
		std::cout << "The value of a is " << a << std::endl;
		break;
	case 4:
		std::cout << "The value of a is " << a << std::endl;
		break;
	case 5:
		std::cout << "The value of a is " << a << std::endl;
		break;
	default:
		std::cout << "The value of a is out of range " <<  std::endl;
		break;
	}
	_getch();
	return 0;
}
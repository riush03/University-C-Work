/*************************************************************************
** A c++ program to show recursion
* 
*  Author :Denis Muriungi
* E-mail   :Denis Muriungi
* 
**************************/
#include<iostream>

using namespace std;

long factorial(long fa)
{
	if (fa > 1)
		return(fa * factorial(fa - 1));
	else
		return 1;
}

int main()
{
	long number = 9;
	std::cout << number << "!=" << factorial(number) << std::endl;
	
	return 0;
}
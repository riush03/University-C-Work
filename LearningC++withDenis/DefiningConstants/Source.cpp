/*****************************************************************************************
**  A sample c++ program to show how constants are defined.
* 
*   Author : Denis Muriungi
*   E-mail : Dennzriush@gmail.com
*******/
#include<iostream>
//define the constant via the preprocessor using 
#define NUMBER  10

using namespace std;

int main()
{
	std::cout << "My constan is : " << NUMBER << std::endl;
	return 0;
}
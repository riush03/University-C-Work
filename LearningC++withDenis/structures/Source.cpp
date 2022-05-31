/**********************************************************************************************
*  A program to demostrate usage of structures in c++
* 
*   Author: Denis Muriungi
*   E-mail: Dennzriush@gmail.com
* 
*    structures @syntax
*    struct name{
*         type1 name1;
*         type2 name2;
*         ...
*     };
*   --create a structure object
* 
*    struct_name object name
************/
#include<iostream>
#include<conio.h>

using namespace std;

/**********************
*    A structure is used to group data together
******/

struct person {
	int age;
	float height;
};

int main()
{
	//struct object
	person section[3];

	section[0].age = 17;
	section[0].height = 40.0f;

	section[1].age = 18;
	section[1].height = 39.0f;

	section[2].age = 20;
	section[2].height = 38.0f;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Person " << i << " age: " << section[i].age << " height: " << section[i].height << std::endl;
	}

	_getch();
	return 0;
}
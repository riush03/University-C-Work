#include<iostream>
#include "Student.h"
/*******************************************************************************
** A sample c++ program to demostrate nested-if
* 
*  =>View -> Student.h
* 
* Author: Denis Muriungi
* Email: Dennzriush@gmail
***********/

using namespace std;

int main()
{
	//create objects
	Student student1{ "Denis Muriungi",90 };
	Student student2{ "Brendah Wanjiru",80 };

	cout << student1.getName() << "s letter grade equivalent of " << student1.getAverage() << "is" << student1.getLetterGrade() << endl;
	cout << student2.getName() << "s letter grade equivalent of " << student2.getAverage() << "is" << student2.getLetterGrade() << endl;
}
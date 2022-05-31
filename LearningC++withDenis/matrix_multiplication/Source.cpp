/***********************************************************************************************************
*  A program to demostrate multiplication of a matrix
* 
*  Author: Denis Muriungi
*  E-mail: Dennzriush@gmail.com
*****/
#include<iostream>
#include<conio.h>

using namespace std;

void multiplyMatrix(int a[4][4])
{
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			std::cout << a[x][y] << ",";
		}
		std::cout << "" << std::endl;
	}
}

int main()
{
	int matrix[4][4] = {
		{3,6,7,8},
		{7,-7,5,9},
		{2,8,10,0},
		{78,5,7,9}
	};

	multiplyMatrix(matrix);
	_getch();
	return 0;
}
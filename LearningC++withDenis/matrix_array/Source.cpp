/***********************************************************************************************
*   A program to demostrate 2-dimension array which is a 4X4 matrix
* 
*   Author: Denis Muriungi
*   Email : Dennzriush@gmail.com
***/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int matrix[4][4] = {
		{3,5,6,-7},
		{5,8,9,-10},
		{4,1,34,9},
		{7,4,17,67}
	};

	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			std::cout << matrix[x][y] << ",";
		}
		std::cout << "," << std::endl;
	}
	_getch();
	return 0;
}
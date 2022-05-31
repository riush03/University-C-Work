/**************************************************************************************
****  Rolling a six-sided Die 60,000,000 tmes
*    A value produced by rand occur with approximately equal likelihood
****/
#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	unsigned int frequency1{ 0 }; //counts of 1s is rolled
	unsigned int frequency2{ 0 }; //counts of 2s is rolled
	unsigned int frequency3{ 0 }; //counts of 3s is rolled
	unsigned int frequency4{ 0 }; //counts of 4s is rolled
	unsigned int frequency5{ 0 }; //counts of 5s is rolled
	unsigned int frequency6{ 0 }; //counts of 6s is rolled
	int face; //stores each roll of the die

	//summarize results of 60,0000,000 roll's of a die
	for (unsigned int roll{ 1 }; roll <= 60000000; ++roll)
	{
		face = 1 + rand() % 6; // random number from 1 to 6

		//determine roll value 1-6 and increment appropriate counter
		switch (face)
		{
		case 1:
			++frequency1; //increment the 1s counter
			break;
		case 2:
			++frequency2; //increment the 2s counter
			break;
		case 3:
			++frequency3;
			break;
		case 4:
			++frequency4;
			break;
		case 5:
			++frequency5;
			break;
		case 6:
			++frequency6;
			break;
		default://invalid values
			std::cout << "The program shoud never get here " << std::endl;
		}
	}

	std::cout << "Face " << setw(13) << "Frequency " << std::endl; //output headers
	std::cout << "   1" << setw(13) << frequency1
		<< "\n   2" << setw(13) << frequency2
		<< "\n   3" << setw(13) << frequency3
		<< "\n   4" << setw(13) << frequency4
		<< "\n   5" << setw(13) << frequency5
		<< "\n   6" << setw(13) << frequency6 << std::endl;
}
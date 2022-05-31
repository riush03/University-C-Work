//a c++ program to stimulates 20 rolls of a six-sided die and display the value of each roll
#include<iostream>
#include<iomanip>
#include<cstdlib> //contains functon prototype for rand

using namespace std;

int main()
{
	//loop 20 times
	for (unsigned int counter{ 1 }; counter <= 20; ++counter)
	{
		//pick a random number from 1 to 6 and output it
		std::cout << setw(10) << (1 + rand() % 6);

		//if counter is divisible by 5, start a new line output
		if (counter % 5 == 0)
		{
			std::cout << std::endl;
		}
	}
}
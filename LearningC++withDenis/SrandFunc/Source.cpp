#include<iostream>
#include<iomanip>
#include<cstdlib> //contains prototypes functions rand and Srand

using namespace std;

int main()
{
	unsigned int seed{ 0 }; //stores the seed entered by the user

	cout << "Enter seed: " << endl;
	cin >> seed;
	srand(seed); // seeds random number generator

	//loop 10 times
	for (unsigned int counter{ 1 }; counter <= 10; ++counter)
	{
		//pick random numbers from 1 to 6
		cout << setw(10) << (1 + rand() % 6);

		//if counter is divisble by five start a new line
		if (counter % 5 == 0)
		{
			std::cout << std::endl;
		}
	}
}
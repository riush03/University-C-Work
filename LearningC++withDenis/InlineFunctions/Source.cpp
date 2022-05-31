#include<iostream>

using namespace std;

inline double cube(const double side)
{
	return side * side * side;
}

int main()
{
	double sideValue; //stores values entered by the user
	std::cout << "Enter the side length of the cube " << std::endl;
	cin >> sideValue;

	cout << "The volume is " << cube(sideValue) << endl;
}
#include<iostream>

using namespace std;

int square(int); //prototype function for square

int main()
{
	int a{ 10 }; //value to square
	cout << "The square is: " << square(a) << endl; //display squared
}

int square(int x)
{
	return x * x;
}
/*************** **********************************************************************
**  A c++ program to show the usage of wrapper class std::array
* 
*   Author: Denis Muriungi
*   Email: Dennzriush@gmail.com
*******/
#include<iostream>
#include<array>
using namespace std;

//using std::araray with a function
void display_array(std::array<int, 5> func_arr)
{
	for (auto ele : func_arr)
	{
		std::cout << ele << ",";
	}
}

int main()
{
	/***********************'
	**  std::array -> automates the allocation and deallocation of memory
	***/
	std::array<int, 10> arr;
	arr[0] = 1; //set the first element as 1

	std::cout << "First element of the array is: " << arr[0] << std::endl;
	std::array<int, 4> arr2 = { 1,2,3,4 };

	std::cout << "Elements in the second array is: ";
	for (int i = 0; i < arr.size(); i++)
	//handle exception
	try
	{
		std::cout << arr.at(4); //No error
		std::cout << arr.at(5); //Throws Exception
	}
	catch (const std::out_of_range& ex)
	{
		std::cerr << ex.what();
	}

	//calling from the function
	std::array<int, 5> func_arr = { 1,2,3,4,5 };
	display_array(func_arr);
}
// A c++ program to calculate Compound Interest

/*************************************
**  @Problem defintion:
*      A person invest $5000 in a savings account yielding 5% interest. Assuming that all the interest
*  is left on deposit, calculate and deposit, calculate and print the amount of money in the account
*  the end of each year for 10 years
* 
*   formula: a = p(1+r)^n
*    p => Original amount invested
*    r => annual interest
*    n => number of years
*    a => amount of deposit at the end of the year
* 
*  Program Author: Denis Muriungi
*  E-mail: Dennzriush@gmail.com
**************/
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	//set floating-point number format
	cout << fixed << setprecision(2);

	double principal{ 100000.00 }; //intial amount before interest
	double rate{ 0.05 }; //interest rate

	cout << "Intial principal: " << principal << std::endl;
	cout << "   Interest Rate    " << rate << endl;

	//display headers
	cout << "\n Year " << setw(20) << "Amount on deposit: " << endl;

	//calculate amount on deposit for each ten years
	for (unsigned int year{ 1 }; year <= 10; year++)
	{
		//calculate amount on deposit at the end of the specified year
		double amount = principal * pow(1.0 + rate, year);

		//display the year and amount
		cout << setw(4) << year << setw(20) << amount << endl;
	}
}
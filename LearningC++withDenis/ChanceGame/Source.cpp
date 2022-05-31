#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

unsigned int rollDice(); // rolls dices , calculates and displays sum

int main()
{
	//scoped enumaration with constants that represent the game status
	enum class Status{CONTINUE,WON, LOST};

	//randomize random number generator
	srand(static_cast<unsigned int>(time(0)));

	unsigned int myPont{ 0 }; // point if no win or loss on first roll
	Status gameStatus; // can be either CONTINUE, WON or LOST
	unsigned int sumOfDice{ rollDice() }; // first roll of the dice

	//determine game status and points based on the first rol
	switch (sumOfDice)
	{
	case 7: // win with 7 on the first rol
	case 11: // win with 11on the first roll
		gameStatus = Status::WON;
		break;
	case 2://lose with two on the first roll
	case 3://lose with 3 on the third roll
	case 12://lose with 12 on the first roll
		gameStatus = Status::LOST;
		break;
	default:// did not win or lose , so continue with the game
		gameStatus = Status::CONTINUE;
		myPont = sumOfDice; // remember the point
		cout << "Point is " << myPont << endl;
		break;
	}

	//while game is not complete
	while (Status::CONTINUE == gameStatus)
	{
		sumOfDice = rollDice(); //roll dice again

		//determine game status
		if (sumOfDice == myPont)
		{
			//win by making point
			gameStatus = Status::WON;
		}
		else
		{
			if (sumOfDice == 7)
			{
				//lose by rolling 7 before point
				gameStatus = Status::LOST;
			}
		}
	}

	//diplay won or lost message
	if (Status::WON == gameStatus)
	{
		cout << "You won the game !" << endl;
	}
	else
	{
		cout << "You lost the game!" << endl;
	}
}

//roll dice, calulate and display sum
unsigned int rollDice()
{
	int die1{ 1 + rand() % 6 }; //first die roll
	int die2{ 1+ rand() % 6 }; //second die roll
	int sum{ die1 + die2 }; //compute sum of the die values

	//display rresult of tjis roll
	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}
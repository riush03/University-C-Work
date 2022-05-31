#include<iostream>

using namespace std;

int main()
{
	//intializing sumof grades enter by the user
	int total{ 0 };
	unsigned int gradeCounter{ 1 }; //intialize grade to be entered next

	//processing phase uses counter-controlled iteration
	while (gradeCounter <= 10) //loop 10 times
	{
		std::cout << "Enter Grade"; //prompt
		int grade;
		cin >> grade; //input next grade
		total = total + grade; //add grade to total
		gradeCounter = gradeCounter + 1; //increment counter by 1
	}

	//terminate phase
	int average{ total / 10 }; //int division yiels int result

	//display total and average grades
	std::cout << "\n Total of all 10 grade is " << total;
	std::cout << "\n Class average is " << average << std::endl;
}
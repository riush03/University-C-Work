#pragma once
//This class stores students data
#include<string>

class Student {
public:
	//Constructor intializes data members
	Student(std::string studentName, int studentAverage) : name(studentName)
	{
		//set average data member if studentAverage is valid
		setAverage(studentAverage);
	}

	//set the student name
	void setName(std::string studentName)
	{
		name = studentName;
	}

	//retrive the student name
	std::string getName() const {
		return name;
	}

	//set the student's average
	void setAverage(int studentAverage)
	{
		//validate the student average is >0 and <=100; otherwise keep
		//the data member average's current value
		if (studentAverage > 0)
		{
			if (studentAverage <= 100)
			{
				//assign to data member
				average = studentAverage;
			}
		}
	}

	//retrieve the student average
	int getAverage() const {
		return average;
	}

	//determine and return the student's letter grade
	std::string getLetterGrade() const {
		//intialized to empty string by class string's constructor
		std::string letterGrade;

		if (average >= 90)
		{
			letterGrade = "A";
		}
		else if (average >= 80)
		{
			letterGrade = "B";
		}
		else if (average >= 70)
		{
			letterGrade = "C";
		}
		else if (average >= 60)
		{
			letterGrade = "D";
		}
		else
		{
			letterGrade = "F";
		}

		return letterGrade;
	}
private:
	std::string name;
	int average{ 0 }; //intialize average to 0
};

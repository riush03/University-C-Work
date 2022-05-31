/***************************************************************************************
** A c++ program to show conditional removal of elements from a linked list using remove_if
* 
*  Author: Denis Muriungi
*  E-mail: Dennzriush@gmail.com
*************/
#include<iostream>
#include<forward_list>

struct Student
{
	std::string name;
	int age;
};

std::ostream& operator<<(std::ostream& os, const Student& student)
{
	return (os << "[Name: " << student.name << ", Age: " << student.age << "]");
}

int main()
{
	std::forward_list<Student> students = { {"Denis",22},{"Mike",23},{"Michelle",21},{"Robert",16} };

	auto students_copy = students;

	std::cout << "All the students";
	for (const auto& student : students)
		std::cout << student << " ";
	std::cout << std::endl;

	students.remove_if([](const Student& student)
		{
			//return true if the age is less than 18
			return (student.age <18);
		});

	std::cout << "Student who will be eligible for admission will be: ";
	for (const auto& student : students)
		std::cout << student << "";
	std::cout << std::endl;

	//remove all the inelligible students from the list
	students.remove_if([](const Student& student)
		{
			//return true if the age is less than 18
			return (student.age != 17);
		});

	std::cout << "Student who will be eligible for admission will be: ";
	for (const auto& student : students_copy)
		std::cout << student << "";
	std::cout << std::endl;

}
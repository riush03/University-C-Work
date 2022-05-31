/*************************************************************************************
***  A c++ program to show how to implement dynamic arrays
* 
*    Author: Denis Muriungi
*    E-mail: Dennzriush@gmail.com
********/

//include the required headers
#include<iostream>
#include<sstream>
#include<algorithm>

//write a basic template structure called dynamic_Array
template <typename T>
class dynamic_Array
{
	T* data;
	size_t n;

	//create a constructor that takes the size of the array and copies it
public:
	dynamic_Array(int n)
	{
		this->n = n;
		data = new T[n];
	}

	dynamic_Array(const dynamic_Array<T>& other)
	{
		n = other.n;
		data = new T[n];

		for (int i = 0; i < n; i++)
			data[i] = other[i];
	}

	//add operator[] and function() in the public accessor to support the access of data directly
	T& operator[](int index)
	{
		return data[index];
	}

	const T& operator[](int index) const
	{
		return data[index];
	}

	T& at(int index)
	{
		if (index < n)
			return data[index];
		throw "Index out of range";
	}

	//create a functon to return the size of an array
	size_t size() const
	{
		return n;
	}

	//create a destructor to avoid memory leaks
	~dynamic_Array()
	{
		//a destructor to prevent memory leak
		delete[] data;
	}

	//add iterator functions to support range-based-lops to iterate over dynamic_Array
	T* begin()
	{
		return data;
	}

	const T* begin() const
	{
		return data;
	}

	T* end()
	{
		return data + n;
	}

	const T* end() const
	{
		return data + n;
	}

	//add a function to append one array to another using the + operator
	//Use a friend function for better usability
	friend dynamic_Array<T> operator+(const dynamic_Array<T>& arr1, dynamic_Array<T>& arr2)
	{
		dynamic_Array<T> result(arr1.size() + arr2.size());
		std::copy(arr1.begin(), arr1.end(), result.begin());
		std::copy(arr2.begin(), arr2.end(), result.begin() + arr1.size());

		return result;
	}

	//add string_separator function that takes as separator as a parameter with the default value as
	std::string string_separator(const std::string& sep = ",")
	{
		if (n == 0)
			return "";
		std::ostringstream os;
		os << data[0];

		for (int i = 1; i < n; i++)
			os << sep << data[i];

		return os.str();
	}
};


//Creating an engineers record system
struct Engineer
{
	std::string name;
	int standard;
};

std::ostream& operator<<(std::ostream& os, const Engineer& eng)
{
	return (os << "[Name: " << eng.name << ",Standard: " << eng.standard << "]");
}

//main function
int main()
{
	int nEngineers;
	std::cout << "Enter the number of engineers in the company: ";
	std::cin >> nEngineers;

	dynamic_Array<Engineer> Company(nEngineers);
	for (int i = 0; i < nEngineers; i++)
	{
		std::cout << "Enter the name and company of the engineer  " << i + 1 << ":";
		std::string name;
		int standard;
		std::cin >> name >> standard;
		Company[i] = Engineer{ name,standard };
	}

	//try to access the student out of range in the array
	try
	{
		Company[nEngineers] = Engineer{ "Denis Muriungi",5 }; //No Exception undefined behavoir
		std::cout << "Company Engineer set out of range with exception" << std::endl;
		Company.at(nEngineers) = Engineer{ "Denis Muriungi",5 };
	}
	catch (...)
	{
		std::cout << "Exception caught " << std::endl;
	}

	auto TeslaCompany = Company; // deep company

	std::cout << "Second comapany after intializating using the fisrt array: " << TeslaCompany.string_separator() << std::endl;

	auto GoogleCompany = Company + TeslaCompany; //Combine both companies and create a bigger one

	std::cout << "Combined class: ";
	std::cout << GoogleCompany.string_separator() << std::endl;

	return 0;
}

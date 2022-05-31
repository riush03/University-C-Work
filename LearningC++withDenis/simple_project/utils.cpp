#include "utils.h"
#include "time.h"

void print_time()
{
	std::time_t now = std::time(nullptr);
	std::cout << "The time and date are " << std::ctime(&now) << std::endl;
}

void print_name()
{
	std::cout << "My name is :" << std::endl;
}
void main()
{
	print_name();
	print_time();
}
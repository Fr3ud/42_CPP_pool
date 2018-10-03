#include <iostream>
#include <string>

int main( void )
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Reference: " << ref << std::endl;

	return (0);
}

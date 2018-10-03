#include "Pony.hpp"

Pony::Pony( std::string name, int age ): name(name), age(age)
{
	std::cout << "Pony " << name << " has born." << std::endl;
}

Pony::~Pony( void )
{
	std::cout << "Pony " << this->name << " died at the age of " << this->age << "." << std::endl;
}

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
public:
	Pony( std::string name, int age);
	~Pony( void );

	std::string name;
	int age;
};

#endif

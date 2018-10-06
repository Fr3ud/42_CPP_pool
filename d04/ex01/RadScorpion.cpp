#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion( void ) : Enemy::Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & enemy )
{
	*this = enemy;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const & enemy)
{
	this->_hp = enemy.getHP();
	this->_type = enemy.getType();
	return *this;
}

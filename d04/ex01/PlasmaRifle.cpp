#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle( void )
{
	this->_name = "Plasma Rifle";
	this->_damage = 21;
	this->_apcost = 5;
}

PlasmaRifle::~PlasmaRifle( void ) {}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & weapon )
{
	*this = weapon;
}

PlasmaRifle&	PlasmaRifle::operator=( PlasmaRifle const & weapon )
{
	this->_name = weapon.getName();
	this->_apcost = weapon.getAPCost();
	this->_damage = weapon.getDamage();
    
	return *this;
}

void		PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

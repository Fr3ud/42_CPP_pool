#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int	main( void )
{
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }

	Sorcerer s("Jaina Proudmoore", "Leader of the Kirin Tor");
	Victim* v = new Victim("lol");
	Victim* p = new Peon("kek");

	std::cout << s << *v << *p;

	s.polymorph(*v);
	s.polymorph(*p);

	delete v;
	delete p;
    
    return 0;
}

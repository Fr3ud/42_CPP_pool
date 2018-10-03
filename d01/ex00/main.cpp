#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap( void )
{
	Pony *pony = new Pony("Heap", 4);
	delete pony;
}

void	 ponyOnTheStack( void )
{
	Pony pony("Stack", 2);
}

int		main( void )
{
	std::cout << "Calling ponyOnTheHeap()" << std::endl;
	ponyOnTheHeap();
	std::cout << "Calling ponyOnTheStack()" << std::endl;
	ponyOnTheStack();
}

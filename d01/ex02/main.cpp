#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main( void )
{
	ZombieEvent event;
	event.setZombieType("42");
	ZombieEvent event2;
	event2.setZombieType("Vegan");
	Zombie*	zombies[3];

	std::cout << "---- Heap ----" << std::endl;
	zombies[0] = event.newZombie("Test1");
	zombies[1] = event.newZombie("Test2");
	zombies[2] = event2.newZombie("Test3");

	for (int i = 0; i < 3; i++)
		zombies[i]->announce();

	for (int i = 0; i < 3; i++)
		delete zombies[i];

	std::cout << "---- Stack ----" << std::endl;
	
	for (int i = 0; i < 4; i++)
		event.randomChump();

	for (int i = 0; i < 2; i++)
		event2.randomChump();
}

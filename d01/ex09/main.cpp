#include "Logger.hpp"

int main( void )
{
	Logger log("log.txt");
	log.log("Console", "-- Start --");
	log.log("File", "log.txt created");
	log.log("Console", "HELLO WORLD!");
	log.log("File", "42");

	return (0);
}

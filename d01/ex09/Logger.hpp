#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>

class Logger
{
	std::string	_file;
	int		log_index;
	void	logToConsole( std::string log );
	void	logToFile( std::string log );
	std::string	makeLogEntry( std::string log );
public:
	Logger( std::string file );
	void	log( std::string const & dest, std::string const & message );
};

#endif

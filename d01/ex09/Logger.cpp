#include "Logger.hpp"

Logger::Logger( std::string file ): _file(file)
{
	this->log_index = 0;
	return;
}

void	Logger::logToConsole( std::string log )
{
	std::cout << this->makeLogEntry(log) << std::endl;
}

void	Logger::logToFile( std::string log )
{
	std::ofstream ofs;
	ofs.open(this->_file, std::ios::app);
	ofs << this->makeLogEntry(log) << std::endl;
	ofs.close();
}

std::string	Logger::makeLogEntry( std::string log )
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer,sizeof(buffer),"%d-%m-%Y %I:%M:%S",timeinfo);
	return ("[" + std::to_string(this->log_index) + "] " + buffer + ": " + log);
}

void	Logger::log( std::string const & dest, std::string const & message )
{
	void	(Logger::*logs[2])( std::string log ) = {&Logger::logToConsole, &Logger::logToFile};
	std::string	log_types[2] = {"Console", "File"};

	for (int i = 0; i < 2; i++)
	{
		if (log_types[i] == dest)
			(this->*logs[i])(message);
	}
	this->log_index++;
}

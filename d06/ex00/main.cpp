#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cfloat>
#include <climits>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage:  " << argv[0] << " <string>" << std::endl;
		return 1;
	}
	std::string check(argv[1]);
	if (check.size() == 1 && (check[0] < '0' || check[0] > '9') && isprint(check[0]))
	{
		std::cout << "char: '" << check[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(check[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(check[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(check[0]) << ".0" << std::endl;
	}
	else
	{
		double	num;
		if (check.size() > 1 && check.back() == 'f' && check[check.size() - 2] != 'n')
			check.resize(check.size() - 1);
		std::stringstream	ss(check);
		ss >> num;
		if (ss.fail() || !ss.eof())
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return 0;
		}

		std::cout << "char: ";
		if (num > CHAR_MAX || num < 0)
			std::cout << "impossible" << std::endl;
		else if (isprint(num))
			std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;

		std::cout << "int: ";
		if (num > INT_MAX || num < INT_MIN || num != num)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(num) << std::endl;

		std::cout << "float: ";
		if ((num > FLT_MAX || num < -FLT_MAX) && num == num && !std::isinf(num))
			std::cout << "impossible" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;

		std::cout << "double: " << std::fixed << std::setprecision(1) << num << std::endl;
	}

    return 0;
}

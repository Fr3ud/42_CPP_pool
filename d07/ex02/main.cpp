#include "Array.hpp"
#include <iostream>

int main( void )
{
	unsigned int i;


	std::cout << "ARR[8]" << std::endl;
    std::cout << "------------------------" << std::endl;

	Array<int> arr = Array<int>(8);
	for (i = 0; i < arr.size(); i++)
    {
		std::cout << "Arr[" << i << "] => " << arr[i] << std::endl;
    }
    std::cout << "------------------------" << std::endl;
	std::cout << "arr[2] = 77" << std::endl;
	arr[2] = 77;

	std::cout << "arr[5] = 42" << std::endl;
	arr[5] = 42;

	std::cout << "arr[10] = 101 ";
	try
	{
		arr[10] = 101;
		std::cout << "OK" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "ERROR!" << std::endl;
	}
    std::cout << "------------------------" << std::endl;

	std::cout << "Copy constructor" << std::endl;
    std::cout << "ARR_COPY[8]" << std::endl;
	Array<int> arr_copy = Array<int>(arr);
	for (i = 0; i < arr_copy.size(); i++)
    {
		std::cout << "arr_copy[" << i << "] => " << arr_copy[i] << std::endl;
    }
    std::cout << "------------------------" << std::endl;

	std::cout << "arr_copy[1] = 101" << std::endl;
	arr_copy[1] = 101;

    std::cout << "arr_copy[7] = 777" << std::endl;
	arr_copy[7] = 777;
    std::cout << "------------------------" << std::endl;

	std::cout << "ARR[8]" << std::endl;
	for (i = 0; i < arr.size(); i++)
    {
		std::cout << "arr[" << i << "] => " << arr[i] << std::endl;
    }
    std::cout << "------------------------" << std::endl;

    std::cout << "ARR_COPY[8]" << std::endl;
	for (i = 0; i < arr_copy.size(); i++)
    {
		std::cout << "arr_copy[" << i << "] => " << arr_copy[i] << std::endl;
    }
    std::cout << "------------------------" << std::endl;

	std::cout << "ARR_COPY = ARR" << std::endl;
	arr_copy = arr;
	for (i = 0; i < arr_copy.size(); i++)
    {
		std::cout << "arr_copy[" << i << "] => " << arr_copy[i] << std::endl;
    }
    std::cout << "------------------------" << std::endl;

	std::cout << "arr_copy[2] = 555" << std::endl;
	arr_copy[2] = 555;
    std::cout << "------------------------" << std::endl;

	std::cout << "ARR[8]" << std::endl;
	for (i = 0; i < arr.size(); i++)
    {
		std::cout << "arr[" << i << "] => " << arr[i] << std::endl;
    }
    std::cout << "------------------------" << std::endl;

    std::cout << "ARR_COPY[8]" << std::endl;
	for (i = 0; i < arr_copy.size(); i++)
    {
		std::cout << "arr_copy[" << i << "] => " << arr_copy[i] << std::endl;
    }
    std::cout << "------------------------" << std::endl;
}

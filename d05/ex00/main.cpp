#include <iostream>
#include <stdexcept>

#include "Bureaucrat.hpp"

static void checkBureaucrat(Bureaucrat b, int min, int max)
{
    try
    {
        for (int i = min; i <= max; i++)
        {
            b.setGrade(i);
            std::cout << b << std::endl;
        }
        b.incrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return;
}

int main(void)
{
    Bureaucrat b("Test", 42);

    checkBureaucrat(b, 1, 150);

    return 0;
}
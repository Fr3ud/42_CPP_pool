#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"

static void test(Bureaucrat b, Form f)
{
    try
    {
        b.signForm(f);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return;
}

int main(void)
{
    Form        form1 = Form("Hello World", 100, 10);
    Form        form2 = Form("New form", 42, 5);
    Bureaucrat  bure1 = Bureaucrat("Bure1", 101);
    Bureaucrat  bure2 = Bureaucrat("Bure2", 3);

    test(bure1, form1);
    std::cout << std::endl;

    test(bure1, form2);
    std::cout << std::endl;

    test(bure2, form1);
    std::cout << std::endl;

    test(bure2, form2);
    std::cout << std::endl;
    return (0);
}

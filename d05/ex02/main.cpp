#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


static void signAndExecuteForms(Bureaucrat b, ShrubberyCreationForm f1, RobotomyRequestForm f2, PresidentialPardonForm f3)
{
    try
    {
        b.signForm(f1);
        b.signForm(f2);
        b.signForm(f3);

        b.executeForm(f1);
        b.executeForm(f2);
        b.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return;
}

int
main(void)
{
    Bureaucrat                    bure1("Bureaucrat1", 1);
    Bureaucrat                    bure2("Bureaucrat2", 77);
    Bureaucrat                    bure3("Bureaucrat3", 42);
    ShrubberyCreationForm         form1("ShrubberyForm");
    RobotomyRequestForm           form2("RobotomyForm");
    PresidentialPardonForm        form3("PresidentialForm");

    signAndExecuteForms(bure1, form1, form2, form3);
    std::cout << std::endl;

    signAndExecuteForms(bure2, form1, form2, form3);
    std::cout << std::endl;

    signAndExecuteForms(bure3, form1, form2, form3);
    std::cout << std::endl;

    return 0;
}

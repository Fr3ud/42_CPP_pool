#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Form *form1;
    Form *form2;
    Form *form3;
    Form *form4;
    Intern int1;
    Bureaucrat bure1 = Bureaucrat("Mr.Bureaucrat", 77);

    form1 = int1.makeForm("robotomy request", "Bender");
    form2 = int1.makeForm("presidential pardon", "Bender");
    form3 = int1.makeForm("shrubbery creation", "Bender");
    std::cout << *form1 << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;

    bure1.signForm(*form1);
    bure1.executeForm(*form1);
    bure1.signForm(*form3);
    bure1.executeForm(*form3);

    form4 = int1.makeForm("NoForm", "Bender");

    return 0;
}

#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_exec = 45;

RobotomyRequestForm::RobotomyRequestForm(void):
    Form("Noname", "Robotomy", RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
    srand(time(NULL));
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form(target, "Robotomy", RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
    srand(time(NULL));
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj):
    Form("Noname", "Robotomy", RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
    srand(time(NULL));
    *this = obj;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    static_cast <void> (rhs);
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    if (rand() & 1)
    {
        std::cout << "VJUUUUUH..." << getTarget() << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << "WASTED" << std::endl;
    }
    return;
}
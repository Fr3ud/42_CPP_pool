#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm(void):
    Form("Noname", "PresidentialPardon", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form(target, "PresidentialPardon", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj):
    Form("Noname", "PresidentialPardon", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    *this = obj;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    static_cast <void> (rhs);
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    return;
}

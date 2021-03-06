#include "Form.hpp"

Form::Form(void):
    _signed(false),
    _signGrade(1),
    _executeGrade(1),
    _name("Noname")
{
    return;
}

Form::Form(const Form &obj) :
    _signed(obj._signed),
    _signGrade(obj._signGrade),
    _executeGrade(obj._executeGrade),
    _name(obj._name)
{
    *this = obj;
    return;
}


Form::Form(std::string name, int signGrade, int executeGrade) :
    _signed(false),
    _signGrade(signGrade),
    _executeGrade(executeGrade),
    _name(name)
{
    if (this->_signGrade < 1 || this->_executeGrade < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->_signGrade > 150 || this->_executeGrade > 150)
    {
        throw Form::GradeTooLowException();
    }
    return;
}

Form::~Form(void)
{
    return;
}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return (*this);
}

Form::GradeTooHighException::GradeTooHighException(void)
{
    return;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj)
{
    *this = obj;
    return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &rhs)
{
    static_cast <void> (rhs);
    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Error: Grade is too high.";
}


Form::GradeTooLowException::GradeTooLowException(void)
{
    return;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
    *this = obj;
    return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &rhs)
{
    static_cast <void> (rhs);
    return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Error: Grade is too low.";
}

std::string Form::getName(void) const
{
    return this->_name;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signGrade)
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        this->_signed = true;
    }
    return;
}

bool Form::getSigned(void) const
{
    return this->_signed;
}

int Form::getGradeToSign(void) const
{
    return this->_signGrade;
}

int Form::getGradeToExecute(void) const
{
    return this->_executeGrade;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form Details:" << std::endl
		<< "Name: " << rhs.getName() << std::endl
		<< "Signing Grade Requirement: " << rhs.getGradeToSign() << std::endl
		<< "Execution Grade Requirement: " << rhs.getGradeToExecute() << std::endl;
	if (rhs.getSigned())
    {
		o << "Form has been signed." << std::endl;
    }
	else
    {
		o << "Form has not been signed yet." << std::endl;
    }
	return o;
}

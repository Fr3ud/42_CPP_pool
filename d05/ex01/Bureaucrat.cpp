#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
    this->_name = "Pawn";
    this->_grade = 150;
    return;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
      this->_name = name;
      this->_grade = grade;
    }
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
    return;
}

Bureaucrat::~Bureaucrat(void)
{
    return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
        this->_name  = rhs._name;
        this->_grade = rhs._grade;
    }
    return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
    return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
    *this = obj;
    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &rhs)
{
    static_cast <void> (rhs);
    return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error: Grade is too low.";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
    return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj)
{
    *this = obj;
    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &rhs)
{
    static_cast <void> (rhs);
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error: Grade is too high.";
}

void Bureaucrat::setName(std::string name)
{
    this->_name = name;
    return;
}

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        this->_grade = grade;
    }
    return;
}

int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade(void)
{
    if (this->_grade <= 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else
    {
        this->_grade -= 1;
    }
    return;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade >= 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        this->_grade += 1;
    }
    return;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->_name << " cannot sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
    return;
}


std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}

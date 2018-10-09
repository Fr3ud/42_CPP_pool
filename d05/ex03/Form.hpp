#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form
{
public:
    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException(void);
        GradeTooHighException(const GradeTooHighException &obj);

        virtual ~GradeTooHighException(void) throw();

        GradeTooHighException &operator=(const GradeTooHighException &rhs);

        virtual const char    *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException(void);
        GradeTooLowException(const GradeTooLowException &obj);

        virtual ~GradeTooLowException(void) throw();

        GradeTooLowException  &operator=(const GradeTooLowException &rhs);

        virtual const char    *what() const throw();
    };

    class NotSignedException : public std::exception
    {
    public:
        NotSignedException(void);
        NotSignedException(const NotSignedException &obj);

        virtual ~NotSignedException(void) throw();

        NotSignedException    &operator=(const NotSignedException &rhs);

        virtual const char    *what(void) const throw();
    };

    Form(void);
    Form(const Form &obj);
    Form(std::string target, std::string name, int signGrade, int executeGrade);

    virtual ~Form() = 0;

    Form                      &operator=(const Form &rhs);

    void                      beSigned(Bureaucrat &bureaucrat);

    std::string               getName(void) const;
    bool                      getSigned(void) const;
    int                       getGradeToSign(void) const;
    int                       getGradeToExecute(void) const;

    void                      setTarget(std::string target);
    std::string               getTarget(void) const;

    virtual void              execute(const Bureaucrat &executor) const = 0;

private:
    bool                      _signed;
    const int                 _signGrade;
    const int                 _executeGrade;
    const std::string         _name;
    std::string               _target;
};

std::ostream                  &operator<<(std::ostream &o, const Form &rhs);

#endif
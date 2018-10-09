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

    Form(void);
    Form(const Form &obj);
    Form(std::string name, int signGrade, int executeGrade);

    ~Form(void);

    Form                      &operator=(const Form &rhs);

    void                      beSigned(Bureaucrat &bureaucrat);

    std::string               getName(void) const;
    bool                      getSigned(void) const;
    int                       getGradeToSign(void) const;
    int                       getGradeToExecute(void) const;

private:
    bool                      _signed;
    const int                 _signGrade;
    const int                 _executeGrade;
    const std::string         _name;
};

std::ostream                  &operator<<(std::ostream &o, const Form &rhs);

#endif
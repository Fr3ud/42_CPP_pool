#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Form;

class Bureaucrat
{
public:
    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException(void);
        GradeTooLowException(const GradeTooLowException &obj);

        virtual ~GradeTooLowException(void) throw();

        GradeTooLowException  &operator=(const GradeTooLowException &rhs);

        virtual const char    *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException(void);
        GradeTooHighException(const GradeTooHighException &obj);

        virtual ~GradeTooHighException(void) throw();

        GradeTooHighException &operator=(const GradeTooHighException &rhs);

        virtual const char    *what() const throw();
    };

    Bureaucrat(void);
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(const Bureaucrat &obj);

    ~Bureaucrat(void);

    Bureaucrat                &operator=(const Bureaucrat &rhs);

    void                      setName(std::string name);
    void                      setGrade(int grade);

    std::string               getName(void) const;
    int                       getGrade(void) const;

    void                      incrementGrade(void);
    void                      decrementGrade(void);

    void                      signForm(Form &form);
    void                      executeForm(const Form &form);

private:
    int                       _grade;
    std::string               _name;
};

std::ostream                    &operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
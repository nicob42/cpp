#ifndef BUREAUCRAT_H

# define BUREAUCRAT_H
# include <iostream>
# include <exception>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int i);
        Bureaucrat & operator=(Bureaucrat const & rhs);
        Bureaucrat(Bureaucrat const & rhs);
        ~Bureaucrat(void);
        std::string getName(void) const;
        int getGrade(void) const;
        void upGrade(void);
        void downGrade(void);
        void signForm(Form  &f);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    private:
        std::string const _name;
        int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif

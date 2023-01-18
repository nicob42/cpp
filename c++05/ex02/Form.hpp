#ifndef FORM_H

# define FORM_H
# include <iostream>
# include <exception>
class Form;
# include "Bureaucrat.hpp"

class Form
{
    public:
        Form(void);
        Form(std::string name, int gradesign, int gradeexec);
        Form & operator=(Form const &rhs);
        Form(Form const & src);
        ~Form(void);
        void beSigned(Bureaucrat &b);
        std::string getName(void) const;
        bool getSigned(void) const;
        int getSign(void) const;
        int getExec(void) const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char *what(void) const throw();

        };
    private:
        std::string const _name;
        bool _signed;
        int const _gradesign;
        int const _gradeexec;
};

std::ostream & operator<<(std::ostream  & o, Form const &rhs);


#endif

#ifndef PFORM_H

# define PFORM_H
# include <iostream>
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        virtual ~PresidentialPardonForm(void);
        virtual void execute(Bureaucrat const & executor) const;
        class NotSignedException: public std::exception
        {
            public:
            virtual const char * what() const throw();
        };
    private:
        std::string _target;

};
#endif
#ifndef SFORM_H

# define SFORM_H
# include <iostream>
# include <fstream>
# include <sstream>
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm(void);
        virtual void execute(Bureaucrat const & executor) const;
        class NotSignedException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
    private:
        std::string _target;

};

#endif

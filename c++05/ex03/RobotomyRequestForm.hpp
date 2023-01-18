#ifndef RFORM_H

# define RFORM_H
# include <iostream>
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        virtual ~RobotomyRequestForm(void);
        virtual void execute(Bureaucrat const & executor) const;
        class NotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    private:
        std::string _target;
};
#endif

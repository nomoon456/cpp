#ifndef SHRUBBERYCREATIONFORM_HPP
#define  SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
    public:
        typedef Form::GradeTooHighException GradeTooHighException;
        typedef Form::GradeTooLowException GradeTooLowException;
        ShrubberyCreationForm();
        explicit ShrubberyCreationForm(const std::string &target);
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat &exec) const;
};

#endif
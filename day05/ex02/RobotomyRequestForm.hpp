#ifndef ROBOTOMYREQUESTFORM_HPP
#define  ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
    public:
        typedef Form::GradeTooHighException GradeTooHighException;
        typedef Form::GradeTooLowException GradeTooLowException;
        RobotomyRequestForm();
        explicit RobotomyRequestForm(const std::string &target);
        virtual ~RobotomyRequestForm();
        void execute(const Bureaucrat & executor) const;
};

#endif
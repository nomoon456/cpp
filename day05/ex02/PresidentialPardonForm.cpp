#include "PresidentialPardonForm.hpp"
/*
        typedef Form::GradeTooHighException GradeTooLowException;
        typedef Form::GradeTooLowException GradeTooLowException;
        PresidentialPardonForm();
        explicit    PresidentialPardonForm(const std::string &target);
        virtual     ~PresidentialPardonForm();
        void        execute(const Bureaucrat &exec) const;*/

PresidentialPardonForm::PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) {
    Form(target, 5, 25);
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &exec) const {
    if (this->isItSigned() && exec.getGrade() <= this->getRequiredRankToExec())
        std::cout << this->getName() << "was forgiven by Zafod Beeblebrox" << std::endl;
    else
        throw GradeTooLowException("Grade Too Low");
}
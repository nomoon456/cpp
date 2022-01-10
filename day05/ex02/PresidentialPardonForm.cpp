#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(target, 5, 25) {
    std::cout << "PresidentialPardonForm constructor that call Form" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &exec) const {
    std::cout << "coucou" << std::endl;
    std::cout << exec << std::endl;
    if (this->isItSigned() && exec.getGrade() <= this->getRequiredRankToExec())
        std::cout << this->getName() << " was forgiven by Zafod Beeblebrox" << std::endl;
    else
        throw GradeTooLowException("Grade Too Low");
}
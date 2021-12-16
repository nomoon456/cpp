#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(target, 45, 72) {}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &exec) const {
    if (this->isItSigned() && exec.getGrade() <= this->getRequiredRankToExec()) {
    srand(time(NULL)); // Initialise la fonction srand (Initialize random number generator) sur le temps actuel
    int i = rand() % 2;
    if (i) 
        std::cout << this->getName() << " well been robotomized" << std::endl;
    else
        std::cout << "Failure Failure Failure" << std::endl;
    } else
        throw GradeTooLowException("Grade Too Low");
}
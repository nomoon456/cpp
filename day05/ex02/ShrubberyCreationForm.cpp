#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :Form(target, 137, 145) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &exec) const {
    std::string nName = getName() + "_shrubbery";
    if (this->isItSigned() && exec.getGrade() <= this->getRequiredRankToExec()) {
        std::fstream file;
        file.open(nName.c_str(), std::ios::in | std::ios::out | std::ios::trunc);
        if (file.is_open()) {
            std::string tr = "\n"
        "ccee88oo\n"
    "C8O8O8Q8PoOb o8oo\n"
"dOB69QO8PdUOpugoO9bD\n"
"CgggbU8OU qOp qOdoUOdcb\n"
"    6OuU  /p u gcoUodpP\n"
"      ||//  /douUP\n"
"       ||///\n"
"         |||/\\n"
"         ||||\n"
"         |||||\n"
"  .....//||||....\n";
          file.write(tr.c_str(), tr.length());
          file.close();
        } else
            std::cout << "Can't open file " << getName() + "_shruberry" << std::endl;
    } else
        throw GradeTooLowException("Grade Too Low");
}
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	std::cout << "*------------------Testing the ShrubberyCreationForm------------------*" << std::endl;
	Bureaucrat bureaucrat1(1, "Joe");
	Bureaucrat bureaucrat2(10, "hhhh");
	ShrubberyCreationForm scf("Home");
	std::cout << "name: " << scf.getName() << std::endl;
	std::cout << "GradeToExec: " << scf.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << scf.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;

	try {
		scf.execute(bureaucrat1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	scf.beSigned(bureaucrat2);
	scf.execute(bureaucrat2);
	std::cout << std::endl;

	std::cout << "*------------------Testing the RobotomyRequestForm------------------*" << std::endl;
	RobotomyRequestForm rrf("homeAgain");
	std::cout << "name: " << rrf.getName() << std::endl;
	std::cout << "GradeToExec: " << rrf.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << rrf.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;

	try {
		rrf.execute(bureaucrat1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	rrf.beSigned(bureaucrat2);
	rrf.execute(bureaucrat2);
	std::cout << std::endl;

	std::cout << "*------------------Testing the PresidentialPardonForm------------------*" << std::endl;
	Bureaucrat bureaucrat3(4, "joe");
	PresidentialPardonForm ppf("homeAgain");
	std::cout << "name: " << ppf.getName() << std::endl;
	std::cout << "GradeToExec: " << ppf.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << ppf.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;

	try {
		ppf.execute(bureaucrat3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	ppf.beSigned(bureaucrat3);
	ppf.execute(bureaucrat3);
}
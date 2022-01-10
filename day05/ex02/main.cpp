#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
/*
	std::cout << " - Testing ShrubberyCreationForm - " << std::endl << std::endl;
	Bureaucrat bureaucrattt(1, "hhhh");
	ShrubberyCreationForm shruberry("Home");
	std::cout << "name: " << shruberry.getName() << std::endl;
	std::cout << "GradeToExec: " << shruberry.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << shruberry.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;
	shruberry.beSigned(bureaucrattt);
	try {
		shruberry.execute(bureaucrattt);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::endl << "- Testing RobotomyRequestForm - " << std::endl << std::endl;
	RobotomyRequestForm robotomy("homeAgain");
	std::cout << "name: " << robotomy.getName() << std::endl;
	std::cout << "GradeToExec: " << robotomy.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << robotomy.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;
	robotomy.beSigned(bureaucrattt);
	try {
		robotomy.execute(bureaucrattt);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::endl << " - Testing PresidentialPardonForm - " << std::endl << std::endl;
	Bureaucrat bureaucrat3(1, "joe");
	PresidentialPardonForm presidential("homeAgain");
	std::cout << "name: " << presidential.getName() << std::endl;
	std::cout << "GradeToExec: " << presidential.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << presidential.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;
	presidential.beSigned(bureaucrat3);
	try {
		presidential.execute(bureaucrat3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
*/
	Bureaucrat bureaucrat1(1, "hhhh");
	PresidentialPardonForm shr("Home");
	bureaucrat1.executeForm(shr);

}
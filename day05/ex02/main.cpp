#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	std::cout << " - Testing ShrubberyCreationForm - " << std::endl << std::endl;
	Bureaucrat bureaucratt(1, "Joe");
	Bureaucrat bureaucrattt(10, "hhhh");
	ShrubberyCreationForm shruberry("Home");
	std::cout << "name: " << shruberry.getName() << std::endl;
	std::cout << "GradeToExec: " << shruberry.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << shruberry.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;
	try {
		shruberry.execute(bureaucratt);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	shruberry.beSigned(bureaucrattt);
	shruberry.execute(bureaucrattt);
	std::cout << std::endl;

	std::cout << std::endl << "- Testing RobotomyRequestForm - " << std::endl << std::endl;
	RobotomyRequestForm robotomy("homeAgain");
	std::cout << "name: " << robotomy.getName() << std::endl;
	std::cout << "GradeToExec: " << robotomy.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << robotomy.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;
	try {
		robotomy.execute(bureaucratt);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	robotomy.beSigned(bureaucrattt);
	robotomy.execute(bureaucrattt);
	std::cout << std::endl;

	std::cout << std::endl << " - Testing PresidentialPardonForm - " << std::endl << std::endl;
	Bureaucrat bureaucrat3(4, "joe");
	PresidentialPardonForm presidential("homeAgain");
	std::cout << "name: " << presidential.getName() << std::endl;
	std::cout << "GradeToExec: " << presidential.getRequiredRankToExec() << std::endl;
	std::cout << "GradeToSign: " << presidential.getRequiredRankToSign() << std::endl;
	std::cout << std::endl;
	try {
		presidential.execute(bureaucrat3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	presidential.beSigned(bureaucrat3);
	presidential.execute(bureaucrat3);
}
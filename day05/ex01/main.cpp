#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <exception>
/*
int main() {
    Bureaucrat bureaucrattt(15, "Joe");
	std::cout << bureaucrattt << std::endl;
	for(int i = 0; i < 14; ++i)
		bureaucrattt.upRank();
	std::cout << bureaucrattt << std::endl;
	bureaucrattt.upRank();
	std::cout << bureaucrattt << std::endl;
	for(int i = 0; i < 151; ++i)
		bureaucrattt.deRank();
	std::cout << bureaucrattt << std::endl;
	Bureaucrat brrrrr(151, "hhhh");
    Bureaucrat br(0, "Yeaer");
	return 0;
}
*/
int main(void)
{
	Form ff("", 3, 2);
	Bureaucrat ss(1, "hhhh");
	try {
		ss.upRank();
		std::cout << ff << std::endl;
	} catch (std::exception &e) {
		std::cout <<"Exception caught: "<< e.what() <<std::endl;
	}

	Bureaucrat b2(1, "hhhh");
	ff.beSigned(b2);
	b2.signForm(ff);
}
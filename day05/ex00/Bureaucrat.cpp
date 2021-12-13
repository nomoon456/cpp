#include "Bureaucrat.hpp"

const   char *Bureaucrat::GradeTooHighException::ah() const throw() {
    return _err.c_str();
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &s){
    std::exception();
    _err = s;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const   char *Bureaucrat::GradeTooLowException::ah() const throw() {
    return _err.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &s) {
    std::exception();
    _err = s;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::Bureaucrat() {
    std::cout << "Default Constructor" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _note(grade) {
    std::cout << "Bureaucrat Constructor" << std::endl;
    try {
        if (_note < 1)
            throw GradeTooHighException("Grade Too High");
        else if (_note > 150)
            throw GradeTooLowException("Grade Too Low");
    } catch (const std::exception &except) {
        std::cout << "An exception has been caught: " << except.what() << std::endl;
    }
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &other) {
    if (this != &other) {
        _name = other._name;
        _note = other._note;
    }
    return *this;
}

int Bureaucrat::getGrade(void) const {
    return _note;
}

std::string Bureaucrat::getName(void) const {
    return _name;
}

void    Bureaucrat::upRank() {
    try {
        _note = _note - 1;
        if (_note <= 0)
            throw GradeTooHighException("Grade Too High");
    } catch (const std::exception &except) {
        std::cout << "Exception has been caught: " << except.what();
    }
}

void    Bureaucrat::deRank() {
    try {
        _note = _note + 1;
        if (_note > 150)
            throw GradeTooLowException("Grade Too Low");
    } catch (const std::exception &except) {
        std::cout << "Exception has been caught: " << except.what();
    }
}
#include "Form.hpp"

const   char *Bureaucrat::GradeTooHighException::what() const throw() {
    return _err.c_str();
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &s){
    std::exception();
    _err = s;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const   char *Bureaucrat::GradeTooLowException::what() const throw() {
    return _err.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &s) {
    std::exception();
    _err = s;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Form::Form() { std::cout << "Default Constructor" << std::endl; }

Form::Form(const std::string &name, int requiredRankToExec, int requiredRankToSign) {
    _name = name;
    _isSigned = false;
    _requiredRankToSign = requiredRankToSign;
    _requiredRankToExec = requiredRankToExec;
    if (requiredRankToSign < 1 || requiredRankToExec < 1)
        throw Form::GradeTooHighException("Grade Too High");
    else if (requiredRankToSign > 150 || requiredRankToExec > 150)
        throw Form::GradeTooLowException("Grade Too Low");
}

Form::Form(const Form &other) {
        _name = other._name;
        _isSigned = other._isSigned;
        _requiredRankToExec = other._requiredRankToExec;
        _requiredRankToSign = other._requiredRankToSign;
}

Form::~Form() {std::cout << "Form Destructor" << std::endl;}

Form &Form::operator=(const Form &other) {
    if (this != &other)
        _isSigned = other._isSigned;
    return *this;
}

void            Form::beSigned(const Bureaucrat &bureaucrat) {
    if(bureaucrat.getGrade() <= _requiredRankToSign)
        _isSigned = true;
    else
        throw Form::GradeTooLowException("Grade Too Low");
}

bool                Form::isItSigned() const {return _isSigned;}
const std::string   &Form::getName() const {return _name;}
int                 Form::getRequiredRankToSign() const {return _requiredRankToSign;}
int                 Form::getRequiredRankToExec() const {return _requiredRankToExec;}

std::ostream    &operator<<(std::ostream &out, Form &form) {
    out << "Name: " << form.getName() << std::endl << "Signed: " << form.isItSigned() << std::endl << "Required Rank To Exec: " << form.getRequiredRankToExec() << std::endl << "Required Rank To Sign: " << form.getRequiredRankToSign() << std::endl;
    return out;
}
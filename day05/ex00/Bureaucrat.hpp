#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
    public:
        class GradeTooHighException : public std::exception {
            public:
                explicit GradeTooHighException(const std::string &str);
                const char *ah() const throw();
                ~GradeTooHighException();
            private:
                std::string _err;
        };
        class GradeTooLowException : public std::exception {
            public:
                explicit GradeTooLowException(const std::string &str);
                const char *ah() const throw();
                ~GradeTooLowException();
            private:
                std::string _err;
        };
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat &operator=(Bureaucrat const &other);
        int getGrade(void) const ;
        std::string getName(void) const ;
        void    upRank(void);
        void    deRank(void);
    private:
        int _note;
        std::string _name;
};

#endif
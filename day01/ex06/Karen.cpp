#include "Karen.hpp"

typedef void (Karen::*callFunc)();

Karen::Karen(void)
{

}

Karen::~Karen(void)
{

}

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I just love it!" << std::endl << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl << "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

int getDangerosity(std::string complain)
{
    std::string const arr[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++)
        if (complain == arr[i])
            return i;
    return 4;
}

void Karen::complain( std::string level )
{
    switch (getDangerosity(level))
    {
        case 0:
            debug();
            info();
            warning();
            error();
            break;
        case 1:
            info();
            warning();
            error();
            break;
        case 2:
            warning();
            error();
            break;
        case 3:
            error();
            break;
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
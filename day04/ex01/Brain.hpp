#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain {
    public:
        Brain();
        Brain(const Brain &other);
	    virtual ~Brain();
	    Brain &operator=(const Brain & other);
        void    setIdeas();
    protected:
        std::string ideas[100];

};

#endif
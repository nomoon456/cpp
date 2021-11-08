#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie {
    public:
                        Zombie(void);
                        ~Zombie(void);
            explicit    Zombie(std::string name);
            void        Announce(void);
    private:
            std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
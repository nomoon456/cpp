#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>
# include <iomanip>


class Weapon {
    public:
        Weapon(std::string weap);
        ~Weapon(void);
        std::string     getType(void) const;
        void            setType(std::string str);

    private:
        std::string _ref;
};

#endif
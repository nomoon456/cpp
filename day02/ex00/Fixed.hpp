/*

Écrivez une classe canonique qui représente les nombres à point fixe :
• Membre privés :
◦ Un int pour stocker la valeur a point fixe
◦ Une variable statique constante de type int pour stocker le nombre de bits
fractionnels. Cette variable vaudra toujours 8.
• Membres publics :
◦ Un constructeur par défaut qui initialise la valeur a point fixe à 0
◦ Un destructeur.
◦ Un constructeur par copie.
◦ Un overload d’opérateur d’assignation.
◦ Une fonction membre int getRawBits(void) const; qui renvoie la valeur
brute du nombre à point fixe.
◦ Une fonction membre void setRawBits(int const raw); qui set la valeur
du nombre à point fixe.
Le code :
*/

#include <iostream>

class Fixed final
{
   public:
        Fixed();
        Fixed(const Fixed &o);
        ~Fixed();
        Fixed & operator = (const Fixed &o);
        int     getRawBits(void);
        void    setRawBits(int P);
    private:
        int fixInt;
        static const int bits = 8;
};
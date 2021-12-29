/*Ecrivez une fonction "Base * generate(void);" qui instancie de facon aléatoire A,
B ou C et retourne un pointeur de l’instance Base. Vous pouvez utiliser n’importe quelle
fonction pour la generation aléatoire.
Écrivez une fonction "void identify(Base * p);" qui affiche "A", "B" ou "C" selon
le type réel de p.
Écrivez une fonction "void identify( Base & p);". Vous ne devez jamais utiliser
un pointeur dans cette fonction. Cette fonction affiche "A", "B" ou "C" selon le type réel
de p.*/

#include <random>
#include "Base.hpp"
#include <iostream>

Base    *generate(void) {
    int r;

    r = rand() % 3;
    if (r == 0) {
        std::cout << "A instance" << std::endl;
        return new A;
    } else if (r == 1) {
        std::cout << "B Instance" << std::endl;
        return new B;
    } else if (r == 2) {
        std::cout << "c Instance" << std::endl;
        return new C;
    }
}

void    identify(Base * p) {
    //dynamic cast cuz "If the value of expression is the null pointer value, the result is the null pointer value of type new-type."
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}



int main() {
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    generate();
    
    return (0);
}
#include "Conv.hpp"
#include "Display.hpp"

int exitError(std::string const &err, int code) {
    std::cout << err << std::endl;
    exit(code);
}

int main(int ac, char **av) {
    if (ac == 2) {
        int     i;
        float   f;
        double  d;
        char    c;
        std::string in(av[1]);
        Conv        conv(in);
        if (!conv.Check()) {
            try {
                d = (double)f;
                c = (char)c;
                f = std::stof(in); // Interprets a floating point value in a string str
                i = std::stoi(in); //Convert string to integer
                if (i < 32 || i > 127)
                    c = 0;
                if (fabs((double)f - (double)i)) //fabs Compute absolute value
                    Display(c, i, f, d, true, false);
                else
                    Display(c, i, f, d, false, false);
            } catch (std::exception &except) {
                std::cout << "char: impossible." << std::endl << "int: impossible." << std::endl;
                d = (double)f;
                Display(-1, -1, f, d, false, true);
            }
        }
    } else
        std::cout << "Error: arguments." << std::endl;
}
#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# include <iostream>
# include <iomanip>


class Karen {
    private:
        Karen(void);
        ~Karen(void);
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
};

#endif
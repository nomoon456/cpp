#include "Iter.hpp"

template <typename T>
void print(T c) {
	std::cout << c << std::endl;
}

class Awesome
{
	public:
		Awesome(void) : _n(0) {return;}
        Awesome & operator= (Awesome & a) {_n = a._n; return *this;}
		bool operator==(Awesome const & rhs) const {return (this->_n == rhs._n);}
		bool operator!=(Awesome const & rhs) const{return (this->_n != rhs._n);}
		bool operator>(Awesome const & rhs) const {return (this->_n > rhs._n);}
		bool operator<(Awesome const & rhs) const {return (this->_n < rhs._n);}
		bool operator>=(Awesome const & rhs) const {return (this->_n >= rhs._n);}
		bool operator<=(Awesome const & rhs) const {return (this->_n <= rhs._n);}
		int get(void) const {return this->_n;}
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
    Awesome tab3[0];
	::iter(tab, 5, print);
	::iter(tab2, 5, print);
    ::iter(tab3, 0, print);

	return 0;
}
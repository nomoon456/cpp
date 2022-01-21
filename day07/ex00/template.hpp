#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &t1, T &t2) {
	T temp = t1;
	t1 = t2;
	t2 = temp;
}

template<typename T>
T min(T t1, T t2) {
	if (t1 < t2)
		return t1;
	return t2;
}

template<class T>
T max(T t1, T t2) {
	if (t1 > t2)
		return t1;
	return t2;
}

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		int get_n() const { return _n; }
	private:
		int _n;
};

#endif
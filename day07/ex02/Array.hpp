/*#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template<typename T>
class Array {
public:
	Array();
	explicit Array(unsigned int n);
	Array(const Array<T> &other);
	~Array();
	Array<T> &operator=(const Array<T> &other);
	T &operator[](int index);
	T const & operator[](int index) const;
	int size() const;
private:
	T *_arr;
	int _size;
};

template<typename T>
Array<T>::Array() : _arr(), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) { }

template<typename T>
Array<T>::~Array() {
	delete[] _arr;
}

template<typename T>
int Array<T>::size() const {
	return _size;
}

template<typename T>
Array<T>::Array(const Array<T> &other) {
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
	if(this != &other) {
		delete[] _arr;
		_size = other._size;
		_arr = new T[_size];
		memcmp(other._arr, _arr, _size);
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index) {
	if(index < 0 || index >= _size)
		throw std::exception();
	return _arr[index];
}

template<typename T>
T const &Array<T>::operator[](int index) const {
	if(index < 0 || index >= _size)
		throw std::exception();
	return _arr[index];
}

template<typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr) {
	out << "[ ";
	for(int i = 0; i < arr.size(); ++i)
		out << arr[i] << " ";
	out << "]" << std::endl;
	return out;
}

#endif // __ARRAY_HPP__*/

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

template <typename T>
class Array{
public:
    class IndexTooHigh : public std::exception {
        public:
        const char *what() const throw(){
            return ("index too high compared to array size");
        };
    };

public:

    Array(){
        this->_arr = new T[0]();
        this->_sz = 0;
    };
    Array(unsigned int n){
        this->_arr = new T[n]();
        this->_sz = n;
    };
    Array(const Array<T> &ref){
        *this = ref;
    };
    ~Array(){
            delete[] this->_arr;
    }
    Array<T> &operator=(const Array<T> &ref){
        this->_sz = ref._sz;
        this->_arr = new T[this->_sz];
        return(*this);
    };


    int size(){
        return (this->_sz);
    };

    T &operator[](int index){
        if (index + 1 > size())
            throw Array<T>::IndexTooHigh();
        return (this->_arr[index]);
    };

private:
    T *_arr;
    int _sz;
     
};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &arr) {
	out << "[ ";
	for(int i = 0; i < arr.size(); ++i)
		out << arr[i] << " ";
	out << "]" << std::endl;
	return out;
}

#endif
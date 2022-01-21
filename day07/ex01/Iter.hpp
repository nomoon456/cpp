#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename ARR>
void iter(ARR *arr, int length, void(*fn)(ARR)) {
    for (int i = 0; i < length; ++i)
        fn(arr[i]);
}

#endif
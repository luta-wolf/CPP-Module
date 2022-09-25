#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int size, void (*f)(const T &x))
{
    for (int i = 0; i < size; i++)
        (*f)(arr[i]);
}

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

#endif

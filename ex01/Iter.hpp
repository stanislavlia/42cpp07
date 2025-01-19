#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <cstddef>

template <typename T>
void    iter(T array[], size_t length, void func(T &));


#endif
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <cstddef>

template <typename T, typename t>
void    iter(T array[], size_t length, t func)
{
    size_t i = 0;


    while (i < length)
    {
        func(array[i]);
        i++;
    }
    
    return ;
};


#endif
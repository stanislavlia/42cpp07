#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *_elements;
        unsigned int _size;
    
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array &arr);
        Array&   operator=(const Array &arr);
        T&   operator[](const unsigned int i);
        unsigned int size() const;
    
        class	IndexOutOfRange: public std::exception
        {
            public:
                virtual const char *	what() const throw()
                {
                    return ("Error: index out pf range");
                }
        };
};


#endif
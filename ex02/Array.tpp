#include "Array.hpp"


template <typename T>
Array<T>::Array(void) : _elements(NULL), _size(0)
{

};


template <typename T>
Array<T>::~Array(void)
{
    if (_size > 0)
        delete[] _elements;
};

template <typename T>
Array<T>::Array(unsigned int n) :  _elements(new T[n]), _size(n)
{

};


template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& arr)
{
    if (this != &arr)
    {
        //clean elements
        delete[] _elements;
        
        _size = arr.size();
        _elements = new T[arr.size()];
        for (unsigned int i = 0; i < arr.size(); i++)
            _elements[i] = arr._elements[i];
    };

    return *this;
};



template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
};



template <typename T>
T&   Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw (Array<T>::IndexOutOfRange());
    
    return _elements[i];
};


template <typename T>
Array<T>::Array(const Array<T> &arr) : _elements(new T[arr.size()]), _size(arr.size())
{
    for (unsigned int  i = 0; i < arr.size(); i++)
    {
        _elements[i] = arr._elements[i];
    };
};






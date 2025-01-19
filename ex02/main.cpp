#include "Array.hpp"
#include "Array.tpp"


template <typename T>
void printArray(Array<T> arr)
{
    std::cout << "array: ";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << ", ";

    std::cout << std::endl;
};


int main()
{
    Array<int> integers = Array<int>(5);
    Array<int> integers_copy = Array<int>(integers);

    std::cout << "Size of array: " << integers.size() << std::endl;

    std::cout << "Print original and copy" << std::endl;
    printArray(integers);
    printArray(integers_copy);

    integers[0] = 10;
    integers[2] = 3232;

    

    std::cout << "Print original and copy after modification" << std::endl;
    printArray(integers);
    printArray(integers_copy);


    //assign
    integers_copy = integers;
    std::cout << "Print original and copy after assignment" << std::endl;
    printArray(integers);
    printArray(integers_copy);


    //try to get exception
    // integers[9];


    return 0;
};
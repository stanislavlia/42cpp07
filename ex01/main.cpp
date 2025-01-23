#include "iter.hpp"
#include <algorithm>


//==============example of functions to apply==========================
void    square(int &num)
{
    num = num * num;
};



float   square_and_return(int &num)
{
    num = num * num;
    return float(num);
};



void    uppper(std::string &str)
{
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}




int main()
{
    //array of ints
    int intarrays[5] = {1, 2, 3, 4, 5};

    //array of strings
    std::string strsarrays[3] = {"hello", "WORLD", "GoodBad"};



    iter(intarrays, 5, square);

    std::cout << "=================INT ARRAY ELEMENTS AFTER SQUARE:==============" << std::endl;
    std::cout << intarrays[0] << std::endl;
    std::cout << intarrays[1] << std::endl;
    std::cout << intarrays[2] << std::endl;
    std::cout << intarrays[3] << std::endl;
    std::cout << intarrays[4] << std::endl;


    iter(intarrays, 5, square_and_return);
    std::cout << "=================INT ARRAY ELEMENTS AFTER ONE MORE SQUARE (func return something):==============" << std::endl;
    std::cout << intarrays[0] << std::endl;
    std::cout << intarrays[1] << std::endl;
    std::cout << intarrays[2] << std::endl;
    std::cout << intarrays[3] << std::endl;
    std::cout << intarrays[4] << std::endl;


    iter(strsarrays, 3, uppper);
    std::cout << "=================STR ARRAY AFTER UPPER:=======================" << std::endl;
    std::cout << strsarrays[0] << std::endl;
    std::cout << strsarrays[1] << std::endl;
    std::cout << strsarrays[2] << std::endl;
   

    return 0;
};

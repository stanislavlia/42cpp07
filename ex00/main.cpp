#include "whatever.hpp"


int main()
{
    int i = 3;
    int j = 9;


    std::string s1 = "hello1";
    std::string s2 = "hello2";

    std::cout << "Swap i and j" << std::endl;
    ::swap(i, j);
    std::cout << "i: " << i << std::endl;
    std::cout << "j: " << j << std::endl;

    std::cout << "Swap s1 and s1" << std::endl;
    ::swap(s1, s2);
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    std::cout << "min " << ::min(i, j) << std::endl;
    std::cout << "max " <<::max(i, j) << std::endl;
    std::cout << "min " << ::min(s1, s2) << std::endl;
    std::cout << "max " <<::max(s1, s2) << std::endl;
    std::cout << "min " << ::min("hey2", "hey1") << std::endl;
    std::cout << "max " << ::max("hey2", "hey1") << std::endl;


    return 0;
}
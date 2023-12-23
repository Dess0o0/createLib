#include <iostream>

#include"lib.hpp"

int main()
{
    std::cout << first(1, 2, 3) << '\n' <<
        second(1, 2) << '\n' <<
        third(1, 2) << '\n' <<
        fourth(1, 3, 4) << '\n' <<
        fifth(2, 4) << '\n' <<
        sixth(1, 2);
}


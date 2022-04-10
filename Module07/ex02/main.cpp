#include <iostream>
#include  <cstdlib>
#include "Array.hpp"

int main(void)
{
    Array<int> arr(6);

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i + 10;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
    try {
        arr[5] = 123456;
        std::cout << arr[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    Array<int> arrr;
    arrr = arr;
    for (int i = 0; i < arrr.size(); i++)
    {
        std::cout << arrr[i] << std::endl;
    }
    return (0);
}
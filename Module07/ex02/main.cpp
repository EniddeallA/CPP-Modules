#include <iostream>
#include  <cstdlib>
#include "Array.hpp"

/*

#define MAX_VAL 750
int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = std::rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

*/

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

    Array<int> arrr;
    arrr = arr;
    for (int i = 0; i < arrr.size(); i++)
    {
        std::cout << arrr[i] << std::endl;
    }
    return (0);
}
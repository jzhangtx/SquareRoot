// SquareRoot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int SearchRoot(int num)
{
    int n1 = 0;
    int n = 0;
    for (int i = 0; i <= num; ++i)
    {
        n = n1;
        if (n == num)
            return i;
        if (i * i > num)
            return i - 1;
    }

    return n; // fake one to make it compile, would never be reached
}

int main()
{
    while (true)
    {
        int Num = 0;
        std::cout << "Number search square root for: ";
        std::cin >> Num;
        if (Num < 0)
            break;

        std::cout << "The aquare root of " << Num << " is: " << SearchRoot(Num) << std::endl << std::endl;
    }
}

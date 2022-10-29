#include <iostream>

int doubleNumber(int value)
{
    return value * 2;
}

int main()
{
    int userNumber;

    std::cout << "Enter integer number: ";
    std::cin >> userNumber;

    std::cout << "Double value: " << doubleNumber(userNumber);
}
#include <iostream>

int main()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    int months = age * 12;
    std::cout << "Your age in months is " << months << "." << std::endl;

    return 0;
}
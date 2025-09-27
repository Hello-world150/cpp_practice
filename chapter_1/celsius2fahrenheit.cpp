#include <iostream>

int main()
{
    std::cout << "Please enter a Celsius value: ";
    float celsius;
    std::cin >> celsius;

    float fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    std::cout << celsius << " degrees Celsius " << "is " << fahrenheit << " degrees Fahrenheit." << std::endl;

    return 0;
}
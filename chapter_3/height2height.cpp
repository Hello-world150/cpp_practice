#include <iostream>

const int INCH_IN_FOOT = 12;

static void print_height(int inch)
{
    int foot = inch / INCH_IN_FOOT;
    int inches = inch % INCH_IN_FOOT;

    std::cout << "Feet: " << foot << ", Inches: " << inches << "\n";
}

int main()
{
    std::cout << "Enter your height in inches: ";
    int height;
    std::cin >> height;

    print_height(height);

    return 0;
}
#include <iostream>

int main()
{
    std::cout << "Enter a number of light years: ";
    double light_years;
    std::cin >> light_years;

    double astronomical_units = light_years * 63240.0;
    std::cout << light_years << " light years = " << astronomical_units << " astronomical units." << std::endl;

    return 0;
}
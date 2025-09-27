#include <iostream>

void show_time(int hours, int minutes)
{
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}

int main()
{
    std::cout << "Enter the number of hours: ";
    int hours;
    std::cin >> hours;

    std::cout << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;

    show_time(hours, minutes);

    return 0;
}
#include <iostream>

int main()
{
    std::cout << "What is your first name? ";
    char first_name[10];
    std::cin >> first_name;

    std::cout << "What is your last name? ";
    char last_name[10];
    std::cin >> last_name;

    std::cout << "What letter grade do you deserve? ";
    char grade;
    std::cin >> grade;

    std::cout << "What is your age? ";
    int age;
    std::cin >> age;

    std::cout << "Name: " << first_name << ", " << last_name << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age << std::endl;
}

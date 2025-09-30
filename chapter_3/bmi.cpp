#include <iostream>

const int INCHES_IN_FOOT = 12;
const float METERS_IN_INCH = 0.0254;
const float POUNDS_IN_KG = 2.2;

static float calculate_bmi(float kg, float meter)
{
    return kg / (meter * meter);
}

static float pounds_to_kg(float pounds)
{
    return pounds / POUNDS_IN_KG;
}

static float inches_to_meters(float inches)
{
    return inches * METERS_IN_INCH;
}

int main()
{
    std::cout << "Enter your height in inches: ";
    float height_in_inches;
    std::cin >> height_in_inches;
    float height_in_meters = inches_to_meters(height_in_inches);

    std::cout << "Enter your weight in pounds: ";
    float weight_in_pounds;
    std::cin >> weight_in_pounds;
    float weight_in_kg = pounds_to_kg(weight_in_pounds);

    float bmi = calculate_bmi(weight_in_kg, height_in_meters);
    std::cout << "Your BMI is: " << bmi << "\n";

    return 0;
}
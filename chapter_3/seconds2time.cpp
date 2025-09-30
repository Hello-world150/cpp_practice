#include <iostream>

const int HOURS_IN_DAY = 24;
const int MINUTES_IN_HOUR = 60;
const int SECONDS_IN_MINUTE = 60;

static void calculate_time(int total_seconds, int &days, int &hours, int &minutes, int &seconds)
{
    days = total_seconds / (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
    total_seconds %= (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);

    hours = total_seconds / (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
    total_seconds %= (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);

    minutes = total_seconds / SECONDS_IN_MINUTE;
    total_seconds %= SECONDS_IN_MINUTE;

    seconds = total_seconds;
}

int main()
{
    std::cout << "Enter the number of seconds: ";
    int total_seconds;
    std::cin >> total_seconds;

    int days, hours, minutes, seconds;
    calculate_time(total_seconds, days, hours, minutes, seconds);

    std::cout << "Time is: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.\n";

    return 0;
}
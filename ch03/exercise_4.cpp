#include <iostream>;

const int Hours_per_day = 24;
const int Minutes_per_hour = 60;
const int Seconds_per_minute = 60;

int main()
{
    using namespace std;
    cout << "Enter the number of seconds: ";
    long second;
    cin >> second;

    int day = second / (Hours_per_day*Minutes_per_hour*Seconds_per_minute);
    int hours = second % (Hours_per_day*Minutes_per_hour*Seconds_per_minute) 
                / (Minutes_per_hour*Seconds_per_minute);
    int minute = (second % (Hours_per_day*Minutes_per_hour*Seconds_per_minute)) 
                 % (Minutes_per_hour*Seconds_per_minute) / Seconds_per_minute; 
    int second_2 = second - minute*Seconds_per_minute - hours*Minutes_per_hour*Seconds_per_minute
                   - day*Hours_per_day*Minutes_per_hour*Seconds_per_minute; 

    cout << second << " seconds = " 
         << day << " days, "
         << hours << " hours, "
         << minute << " minutes, "
         << second_2 << " seconds\n";

    return 0;
}
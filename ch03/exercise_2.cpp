#include <iostream>;

const double Inch_per_foot = 12;
const double Meter_per_inch = 0.0254;
const double Pound_per_kilogram = 2.2;

int main()
{
    using namespace std;
    double height_foot;
    double height_inch;
    double weight_pound;

    cout << "Enter your height in foot and inch, foot: ";
    cin >> height_foot;
    cout << "inch: ";
    cin >> height_inch;
    
    cout << "Enter your weight in pounds: ";
    cin >> weight_pound;

    double height_inch_only = height_foot*Inch_per_foot +height_inch;
    double height_meter = height_inch_only*Meter_per_inch;
    double weight_kilogram = weight_pound/Pound_per_kilogram;
    double BMI = weight_kilogram/(height_meter*height_meter);

    cout << "Your BMI is " << BMI << endl;


    return 0;
}
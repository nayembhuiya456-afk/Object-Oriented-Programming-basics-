#include <iostream>
using namespace std;

double calculate(double weight, double height)
{
    return weight / (height * height);
}

int main()
{
    double weight, height, bmi;

    cout << "Enter your weight in KG : ";
    cin >> weight;

    cout << "Enter your height in meters : ";
    cin >> height;

    bmi = calculate(weight, height);

    cout << "Your BMI is: " << bmi << endl;

    return 0;
}


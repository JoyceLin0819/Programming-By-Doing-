// Joyce Lin If Statement BMI Categories 35-45 points

#include <iostream>
using namespace std;

int main()
{
    double h, w, BMI;

    cout << "Your height in m: ";
    cin >> h;
    cout << "Your weight in kg: ";
    cin >> w;

    BMI = w/(h*h);
    cout << "Your BMI is: " << BMI<<"\n";

    if (BMI < 18.5)
    {
        cout << "BMI Category: underweight\n";
    }else if (BMI <=24.9)
    {
        cout << "BMI Category: normal weight\n";
    }else if (BMI <= 29.9)
    {
        cout << "BMI Category: overweight\n";
    }else
    {
        cout << "BMI Category: obese\n";
    }

    return 0;
}
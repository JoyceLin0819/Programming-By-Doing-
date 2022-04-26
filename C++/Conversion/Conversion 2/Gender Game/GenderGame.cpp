// Joyce Lin If Statements Gender Game 50 points 
#include <iostream>
using namespace std;

int main()
{
    string gender, fn, ln, m;
    int age;

    cout << "What is your gender (M or F): ";
    cin >> gender;
    cout << "First name: ";
    cin >> fn;
    cout << "Last name: ";
    cin >> ln;
    cout << "Age: ";
    cin >> age;

    if(age<20)
    {
        cout << "Then I shall call you " << fn << " " << ln << endl;
    }else 
    {
        cout << "Are you married, " << fn <<" (y or n)? " << endl;
        cin >> m;
    }

    if (age > 20)
    {
        if (m == "n" && gender == "F")
        {
            cout << "Then I shall call you Ms." << ln<<endl;
        }else if (m == "y" && gender == "F")
        {
            cout << "Then I shall call you Mrs. " << ln<<endl;
        }else
        {
            cout << "Then I shall call you Mr." << ln<<endl;
        }
    }
  
    return 0;
}
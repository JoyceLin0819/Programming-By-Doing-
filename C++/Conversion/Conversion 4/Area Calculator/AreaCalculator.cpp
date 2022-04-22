// Joyce Lin Function Area Caculator 110 points
#include <iostream>

using namespace std;

void CircleArea (float &a);
void RecArea (float &a, float &b);
void SquareArea (float &a);
void TriangleArea (float &a, float &b);

int main()
{
    int choice;
    int again = 1;
    float *num1 = new float;
    float *num2 = new float;

    while(again == 1)
    {
        cout << "Welcome to my simple area calculator!" << endl;
        cout << "********************************" << endl;
        cout << "1) Triangle" << endl;
        cout << "2) Rectangle" << endl;
        cout << "3) Square" << endl;
        cout << "4) Circle" << endl;
        cout << "5) Quit" << endl;
        cout << "*********************************" << endl;
        cout << "Please Enter the number of the operator you would like to compute:";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Base: ";
                cin >> *num1;
                cout << "Height: ";
                cin >> *num2;
                TriangleArea (*num1, *num2);
                break;
            case 2:
                cout << "Lenght: ";
                cin >> *num1;
                cout << "Width: ";
                cin >> *num2;
                RecArea(*num1, *num2);
                break;
            case 3:
                cout << "Side length: ";
                cin >> *num1;
                SquareArea(*num1);
                break;
            case 4:
                cout << "Radius: ";
                cin >> *num1;
                CircleArea(*num1);
                break;
            case 5:
                again = 0;
                break;

        }
    }
    if(again == 0)
    {
        cout << "Bye!" << endl;
    }
    return 0;
}

void TriangleArea(float &a, float &b)
{
    cout << "The area is " << a*b/2 << endl << endl;
}

void RecArea(float &a, float &b)
{
    cout << "The area is " << a*b << endl << endl;
}

void SquareArea(float &a)
{
    cout << "The area is " << a*a << endl << endl;
}

void CircleArea(float &a)
{
    cout << "The area is " << 2.14159*a*a << endl << endl;
}
// // Basic and Printing Numbers and Math 6 points Joyce Lin 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool result;

    cout << "I will now count my chickens:\n";

    cout << "Hens: " << 25.5+30.0/6.0 << endl;
    cout << "Roosters: " << 100-25*3%4 << endl;

    cout << "Now I will count the eggs: ";

    cout << 3+2+1-5+4%2-1/4+6<<endl;

    cout << "Is it true that 3+2 < 5-7?" << endl;
    result = (3+5 < 5-7);
    cout << result << endl;

    cout << "What is 3+2? " << 3+5 << endl;
    cout << "What is 5-7? " << 5-7 << endl;

    cout << "Oh, that's why it's flase." << endl;

    cout << "How about some more." << endl;

    result = (5>-2);
    cout << "Is it greater? " << result << endl;

    result = (5>=-2);
    cout << "Is it greater or equal? " << result << endl;

    result = (5<=-2);
    cout << "Is it less or equal? " << result << endl;
}
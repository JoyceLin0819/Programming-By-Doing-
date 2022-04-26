// Joyce Lin If Statements compareTo() Challenge 35 points 
#include <iostream>
using namespace std;

int main()
{
    string a = "axe";
    string b = "rabbit";
    string c = "axe";

    int x = a.compare(b);
    cout << x << endl;

    int y = a.compare(c);
    cout << y << endl;

    int z = b.compare(a);
    cout << z << endl;


    return 0;
}
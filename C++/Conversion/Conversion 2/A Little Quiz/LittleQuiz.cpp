// Joyce Lin If Statements A Little Quiz 40 points 

#include <iostream>
using namespace std;

int main()
{
    string x;
    int q1, q2, q3;

    cout << "Are you ready for a quiz?\n";
    cin >> x;
    cout << "Okey, here it comes!\n";

    cout << "Q1) What is the capital of Alaska?\n";
    cout << "\t 1) Melbourne\n \t 2) Anchorage\n \t 3) Juneau\n >";
    cin>>q1;
    if (q1 == 3)
    {
        cout << "That's right!\n";
    }else
    {
        cout << "Sorry, that is wrong :(\n";
    };

    cout << "Q2) Can you store the value \"cat\" in a variable of type int? \n";
    cout << "\t 1) Yes\n \t 2) No\n > ";
    cin>>q2;
    if (q2 == 2)
    {
        cout << "That's right!\n";
    }else
    {
        cout << "Sorry, that is wrong :(\n";
    }

    cout << "Q3) What is the result of 9+6/3?\n";
    cout << "\t 1) 5\n \t 2) 11\n \t 3) 15/3 \n >";
    cin>>q2;
    if (q2 == 2)
    {
        cout << "That's right!\n";
    }else
    {
        cout << "Sorry, that is wrong :(\n";
    }

    cout << "Overall, you got 2 out 3 correct.\n";
    return 0;
}
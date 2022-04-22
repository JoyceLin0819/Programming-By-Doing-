// Joyce Lin Random Numbers A Number Guessing Game 20 points 
#include <iostream>
#include <stdlib.h>     
#include <time.h>
using namespace std;

int main()
{
    srand (time(NULL));
    int x = rand()%10 + 1;
    int g;

    cout << "I'm thinking of a number from 1 to 10.\n";
    cout << "Your guess: ";
    cin >> g;

    if (g == x)
    {
        cout << "That's right! My secret number was " << x << endl;
    }else 
    {
        cout << "Sorry, but I was really thinking of " << x << endl;
    }
    return 0;
}
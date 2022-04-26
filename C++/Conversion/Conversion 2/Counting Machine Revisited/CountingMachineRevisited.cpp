// Joyce Lin For Loops Counting Machine Revisited 25 points 
#include <iostream>
using namespace std;

int main()
{
    int start, end, skip;
    cout << "Count from: ";
    cin >> start;
    cout << "Count to: ";
    cin >> end;
    cout << "Cout by: ";
    cin >> skip;

    for(int i=start; i <= end; i+=skip)
    {
        cout << i << " ";
    }
}
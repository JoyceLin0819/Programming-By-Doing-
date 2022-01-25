// Joyce Lin Nested Loops Basic Nested Loops 50 points 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num = 1; //start table of numbers at one

    for (int row = 0; row < 10; row++) //creates 10 rows
    {
        for (int col = 0; col < 8; col++) //creates 8 columns
        {
            cout << num << "\t" ; //print each number
            num += 10;
        }
    num = row + 2;
    cout << endl; //output new line at the end of each row
    }      

    return 0;
}

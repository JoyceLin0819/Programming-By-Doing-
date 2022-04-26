// Joyce Lin C++ Test #1
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // 1D array
    int d;
    srand(time(NULL));
    cout << "Welcome to the Alphabet Sorting!" << endl;
    cout << "Enter the number of elements: ";
    cin >> d;
    char carr[d];
    char temp;
    cout << endl;

    // Generate random 1D array
    cout << "Generated Array:" << endl;
    for(int i=0; i < d; i++)
    {
        carr[i] = rand() % ('z' - 'a' + 1) + 'a';
        cout << carr[i] << " ";
    }
    cout << endl;

    // Sortiing 1D array alphabetically
    cout << "Sorted Array: " << endl;
    for(int i=0;i<d;i++)
    {
        for(int j=1;j<d-i;j++)
        {
            if(carr[j-1]>carr[j])
            {
                temp=carr[j-1];
                carr[j-1]=carr[j];
                carr[j]=temp;
            }
        }
    }
    for(int i=0;i<d;i++)
        cout<<carr[i] << " ";
    cout << endl << endl;

    // 2D array
    int m, n;
    cout << "Enter the number of column: ";
    cin >> m;
    cout << "Enter the number of row: ";
    cin >> n;
    char arr[n][m];
    cout << endl;

    // Generate random 2D array
    cout << "Generated Array:" << endl;
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m; j++)
        {
            arr[i][j] = rand() % ('z' - 'a' + 1) + 'a';
            cout << arr[i][j] << " ";
        }
        cout<< endl;
    }

    // Sorting 2D using Radix sort in alphabetical order in a up and down pattern
    cout << "Sorted Array: " << endl;
    
    return 0;
}


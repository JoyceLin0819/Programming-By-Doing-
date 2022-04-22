#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // int numRows = 4; 
    // int numCols = 4;
    // int temp;
    // int AR[numRows][numCols] = {{41, 12, 33, 14}, {15, 46, 17, 68}, {59, 11, 17, 22}, {23, 44, 65, 66}};

    int numCols;
    int numRows;
    int temp;
    srand(unsigned(NULL));

    cout << "Number of colums: " << endl;
    cin >> numCols;
    cout << "Number of rows: " << endl;
    cin >> numRows;
    int AR[numRows][numCols];


    cout << "Array before sorting: " <<endl;
    for(int i=0; i<numRows;i++)
    {
        for(int j=0;j<numCols;j++)
        {
            AR[i][j] = rand()%26+97;
            cout << char(AR[i][j]) << " ";
        }
        cout << endl;
    }

    // Sort by rows
    for(int k=0; k<numRows*numCols; k++)
    {
        for(int l=0; l<numRows; l++)
        {
            for(int m=0;m<numCols-1;m++)
            {
                if(AR[l][m] > AR[l][m+1])
                {
                    temp = AR[l][m];
                    AR[l][m] = AR[l][m+1];
                    AR[l][m+1] = temp;
                }
            }
        }

        // Sorting by colums
        for(int o=0; o<numCols; o++)
        {
            for(int p=0; p<numRows-1; p++)
            {
                if(o%2==0)
                {
                    if(AR[p][o] > AR[p+1][o])
                    {
                        temp = AR[p][o];
                        AR[p][o] = AR[p+1][o];
                        AR[p+1][o] = temp;
                    }
                }else
                {
                    if(AR[p][o] < AR[p+1][o])
                    {
                        temp = AR[p][o];
                        AR[p][o] = AR[p+1][o];
                        AR[p+1][o] = temp;
                    }
                }
            }
        }
    }

    cout << "Array after sorting by rows & colums: " <<endl;
    for(int i=0; i<numRows;i++)
    {
        for(int j=0;j<numCols;j++)
        {
            cout << char(AR[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}
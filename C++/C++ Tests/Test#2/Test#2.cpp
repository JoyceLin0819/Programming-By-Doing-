// Joyce Lin C++ Test #2: 20 Ways
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

#define ROW 3
#define COL 3

typedef int Array2D[ROW][COL]; // New Type

using namespace std;

void M1();
void M2();
void M3();
void M4();
void M5();
void M6();
void M7();
void M8();
void M9();
void M10();
void M11();
void M12();
void M13();
void M14();
void M15();
void M16();
void M17();
void M18();
void M19();
void M20();

void printArray2D(int *list, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << list[i * col + j] << " ";
        cout << endl;
    }
}

void print(int q[][3], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cout << q[i][j];
        cout << "\n";
    }
    cout << "\n";
}

template <typename T, size_t N, size_t M>
void printArray(T (&mat)[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mat[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{
    // M1();
    // M2();
    // M3();
    // M4();
    // M5();
    // M6();
    // M7();
    // M8();
    // M9();
    // M10();
    // M11();
    // M12();
    // M13();
    // M14();
    // M15();
    // M16();
    // M17();
    // M18();
    // M19();
    // M20();
    
    return 0;
}

// using 2D matrix (classic way to do it)
void M1()
{
    const int m = 3, n = 3;

    int mat[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

// using a range-based for-loop
void M2()
{
    const int m = 3, n = 3;

    int mat[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (auto &row : mat)
    {
        for (auto &i : row)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

// only using C
void M3()
{
    int m = 3, n = 3;
    int a[3 * 3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = a;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d", *(ptr + (n * i + j)));
        printf("\n");
    }
    printf("\n");
}

// using list
void M4()
{
    int list1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row1 = sizeof(list1) / sizeof(list1[0]);
    int col1 = sizeof(list1[0]) / sizeof(list1[0][0]);

    printArray2D((int *)list1, row1, col1);
    printf("\n");
}

// access a 2D array using a single pointer
void M5()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int i, j;

    // pionter
    int *ptr = &arr[0][0];

    // print the element of the array via pointer ptr
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", *(ptr + i * cols + j));
        }
        printf("\n");
    }
    printf("\n");
}

// taking 2D array elements as user input
void M6()
{
    int s[3][3];
    int i, j;
    cout << "\n2D Array Input:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\ns[" << i << "][" << j << "]=  ";
            cin >> s[i][j];
        }
    }

    cout << "\nThe 2-D Array is:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\t" << s[i][j];
        }
        cout << endl;
    }
}

// Passing 2D Array to a Function
void M7()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(arr, 3, 3);
}

// Using vector and nested for loop
void M8()
{
    // initialize a 2D vector named "vect"
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // print the value with nested for loop
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}

// Using vector and nested for loop with of iterator
void M9()
{
    // initialize a 2D vector named "vect"
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // nested for loop with iterator
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

// using variable
void M10()
{
    int a, b, c, d, e, f, g, h, i;
    a = 1;
    b = 3;
    c = 5;
    d = 7;
    e = 9;
    f = 11;
    g = 13;
    h = 15;
    i = 17;

    cout << a << " " << b << " " << c << endl;
    cout << d << " " << e << " " << f << endl;
    cout << g << " " << h << " " << i << endl;
}

// using template
void M11()
{
    const int m = 3, n = 3;

    int mat[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printArray(mat);
    cout << endl;
}

// Only using nested for loop
void M12()
{
    int n = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
    cout << endl;
}

// Using for loop and if statement with a and b condition
void M13()
{
    for (int i = 1; i <= 9; i++)
    {
        cout << i << " ";
        if (i == 3 || i == 6)
        {
            cout << endl;
        }
    }
    cout << endl;
}

// Using only one for loop
void M14()
{
    int number = 123;
    for (int i = 0; i < 3; i++)
    {
        cout << (number + i * 333) << endl;
    }
}

// Using only while loops
void M15()
{
    int j = 0;
    while (j < 3)
    {
        int i = 0;
        while (i < 3)
        {
            i++;
            cout << (j * 3) + i << " ";
        }
        cout << endl;
        j++;
    }
    cout << endl;
}

// Storing numbers in 2D array and access numbers in the 2D array
void M16()
{
    int a[3][3] = {{0}, {0}, {0}};

    // storing number
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;
    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    // access numbers
    cout << a[0][0] << " " << a[0][1] << " " << a[0][2] << endl;
    cout << a[1][0] << " " << a[1][1] << " " << a[1][2] << endl;
    cout << a[2][0] << " " << a[2][1] << " " << a[2][2] << endl;
    cout << endl;
}

// Using do while loop
void M17()
{
    int j = 0;
    do
    {
        int i = 0;
        do
        {
            i++;
            cout << (j * 3) + i << " ";
        } while (i < 3);
        cout << endl;
        j++;
    } while (j < 3);
}

// Using universal counter which is printed out with nested while loop inside a do while loop
void M18()
{
    int counter = 1;
    int i = 0;
    while(i<3)
    {
        int j = 0;
        do
        {
            cout << counter << " ";
            counter++;
            j++;
        } while (j<3);
        cout << endl;
        i++;   
    }
    cout << endl;
}

// Simply using cout 
void M19()
{
    cout << "1 2 3 \n4 5 6 \n7 8 9" << endl << endl;
}

// using while loop and if statement with modulo
void M20()
{
    for(int i=1; i<10; i++)
    {
        cout << i << " ";
        if(i%3 == 0)
        {
            cout << "\n";
        }
    }
    cout << endl;
}
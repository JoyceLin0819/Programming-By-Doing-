// Joyce Lin Pointer #2

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float arr[3]={5,6,7};

    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        // print out &arr[i] = adress of i
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        // print out ptr + i = adress of 5 + i
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    cout<<"\nDisplaying value using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        // print out ptr + i = value pointed to by (5+i)
        cout << "ptr + " << i << " = "<< *(ptr + i) << endl;
    }
    return 0;
}
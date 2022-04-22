// Joyce Lin Programming Challenge #2
#include <iostream>
#include <cmath> 
#include <math.h>

using namespace std;

#define MAX 500

void requirement0();
void requirement1();
void requirement2();
void requirement3();
void requirement4();

unsigned long long series(int n);
int multiply(int x, int res[], int res_size);

int main()
{
    // requirement0();
    requirement1();
    // requirement2();
    // requirement3();
    return 0;
}


// The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.
void requirement0()
{
    int n = 10;
    unsigned long long res = series(n);
    cout<< "The sum of series to 10: " << res<<endl;
}

unsigned long long series(int n)
{
    int i;
    unsigned long long sums = 0;
    for (i = 1; i <= n; i++)
        sums += pow(i,i);
    return sums;
}


// Find the sum of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.
void requirement1()
{
    int n = 1000;
    
    cout<< "The sum of series to 1000: ";
}


// Find the last ten digits of the sum of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.
void requirement2()
{
    unsigned long long result=0;
    unsigned long long modulo = 10000000000;
    
    for (int i = 1; i <= 1000; i++)
    {
        unsigned long long temp = i;
        for (int j = 1; j < i; j++)
        {
            temp = temp * i;
            temp = temp % modulo;
        }
        result = result + temp;
        result = result % modulo;
    }
    cout<< "The last ten digit of the number is: " << result << endl;
}


// Find the last ten digits of the sum of the series where the user can set the starting and end points
void requirement3()
{
    unsigned long long result=0;
    unsigned long long modulo = 10000000000;
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    
    for (int i = start; i <= end; i++)
    {
        unsigned long long temp = i;
        for (int j = 1; j < i; j++)
        {
            temp = temp * i;
            temp = temp % modulo;
        }
        result = result + temp;
        result = result % modulo;
    }
    cout<< "The last ten digit of the number is: " << result << endl;
}
// Joyce lin Programming Challenge #3
#include <iostream>
#include <cmath>

using namespace std;

void requirement1();
void requirement2();
void requirement3();
void requirement4();

long long int power(long long int a, long long int b);
long long int findDigits(long long int a);
int findSum (int expos, int num);


int main()
{
    // requirement1();
    // requirement2();
    // requirement3();
    requirement4();

    return 0;
}


// Find all the numbers that can be written as the sum of fourth powers of their digits
void requirement1()
{
    long long int i, result = 0;
    for (i = 2; i <= 39366; i++)
    {
        long long int digitNumber = findDigits(i), sum = 0, j;
        long long int* digits = new long long int [digitNumber];

        for (j = digitNumber; j > 0; j--)
        {
            digits[j - 1] = (i % power(10, j)) / (power(10, (j - 1)));
        }

        for (j = 0; j < digitNumber; j++)
        {
            sum += power(digits[j], 4);
        }

        if(sum == i)
        {
            result +=i;
        }
    }
        cout << endl << "Output: " << result << endl;
}

long long int power(long long int a, long long int b)
{
    long long int result = 1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }
    return result;
}

long long int findDigits(long long int a)
{
    long long int counter = 1;
    while(a >= 10)
    {
        a /= 10;
        counter++;
    }
    return counter;
}

// Find all the numbers that can be written as the sum of fifth powers of their digits.
void requirement2()
{
    long long int i, result = 0;
    for (i = 2; i <= 354294; i++)
    {
        long long int digitNumber = findDigits(i), sum = 0, j;
        long long int* digits = new long long int [digitNumber];

        for (j = digitNumber; j > 0; j--)
        {
            digits[j - 1] = (i % power(10, j)) / (power(10, (j - 1)));
        }

        for (j = 0; j < digitNumber; j++)
        {
            sum += power(digits[j], 5);
        }

        if(sum == i)
        {
            cout << sum << ", ";
        }
    }
}

// Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
void requirement3()
{
    long long int i, result = 0;
    for (i = 2; i <= 354294; i++)
    {
        long long int digitNumber = findDigits(i), sum = 0, j;
        long long int* digits = new long long int [digitNumber];

        for (j = digitNumber; j > 0; j--)
        {
            digits[j - 1] = (i % power(10, j)) / (power(10, (j - 1)));
        }

        for (j = 0; j < digitNumber; j++)
        {
            sum += power(digits[j], 5);
        }

        if(sum == i)
        {
            result +=i;
        }
    }
        cout << endl << "Output: " << result << endl;
}

// Find the sum of all the numbers that can be written as the sum of a user given power of their digits.
void requirement4()
{
   long long int i, result = 0;
   int expo;
   cout << "Please enter the power: ";
   cin >> expo;
    for (i = 2; i <= 10000000; i++)
    {
        long long int digitNumber = findDigits(i), sum = 0, j;
        long long int* digits = new long long int [digitNumber];

        for (j = digitNumber; j > 0; j--)
        {
            digits[j - 1] = (i % power(10, j)) / (power(10, (j - 1)));
        }

        for (j = 0; j < digitNumber; j++)
        {
            sum += power(digits[j], expo);
        }

        if(sum == i)
        {
            result +=i;
        }
    }
        cout << endl << "Output: " << result << endl;
}


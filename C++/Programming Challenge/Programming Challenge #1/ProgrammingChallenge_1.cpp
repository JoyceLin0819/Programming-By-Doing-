// Joyce Lin Programming Challenge #1
#include <iostream>
#include<stdio.h>

using namespace std;

void Requirement1();
void Requirement2();
void Requirement3();
void Requirement4();
void Requirement5();

int findSum(int n, int a, int b);
int calcMulSum(int N, int M1, int M2);


int main() 
{
    Requirement1();
    Requirement2();
    Requirement3();
    Requirement4();
    Requirement5();
    return 0;
}


/* Write a function to find sum of natural numbers below 10 that are multiples of 3 or 5. 
   Hint: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
   The sum of these multiples is 23. */
void Requirement1()
{
    int sum = 0;

	for (int i = 0; i < 10; i++) {

		if (i%3==0 || i%5==0)

			sum += i;
	}
	cout << "Sum of the natural numbers below 10 that are multiples of 3 or 5: " << sum << endl;
}


// Write a function to find the sum of all the multiples of 3 or 5 below 1000.
void Requirement2()
{
    long unsigned int i,sum=0;
    for(i=0;i<1000;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+i;
        }
    }
    cout << "The sum of all the multiples of 3 or 5 below 1000: " << sum;
}


// Write a function to find the sum of all the multiples of any two numbers below 100
void Requirement3()
{
    int n = 100, a = 3, b = 5;
    cout << "\nThe sum of all the multiples of any two numbers below 100: " << findSum(n, a, b);
}

int findSum(int n, int a, int b)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
 
        // If i is a multiple of a or b
        if (i % a == 0 || i % b == 0)
            sum += i;
 
    return sum;
}


// Write a function to find the sum of all the multiples of any two numbers below a given number.
void Requirement4()
{
    int N = 24, M1 = 4, M2 = 7;
    cout<<"\nThe sum of multiples of "<<M1<<" and "<<M2<<" below "<<N<<" is "<<calcMulSum(N, M1, M2) << endl;
}

int calcMulSum(int N, int M1, int M2){
   int sum = 0;
   for (int i = 0; i < N; i++)
      if (i%M1 == 0 || i%M2 == 0)
   sum += i;
   return sum;
}


// Write a function to find the sum of all the multiples of any set of numbers below a given number
void Requirement5()
{
    int N, M1, M2;
    cout << "Enter the range: ";
    cin >> N;
    cout << "Enter the first number: ";
    cin >> M1;
    cout << "Enter the second number: ";
    cin >> M2;

    cout<<"\nThe sum of multiples of "<<M1<<" and "<<M2<<" below "<<N<<" is "<<calcMulSum(N, M1, M2);
}
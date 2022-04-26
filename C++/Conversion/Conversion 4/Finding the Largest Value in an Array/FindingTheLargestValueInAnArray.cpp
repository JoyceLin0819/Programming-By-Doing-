// Joyce Lin Array Finding the Largest Value in an Array 100 points
#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int main()
{
    int a[10];
    srand(time(NULL));
    for(int i=0;i<10;i++)
	{
		int num = rand();
		a[i]=num;
	}
 
	for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
	cout<<endl;

    int* largest = a;
    for (int i = 1; i < 10; i++)
    {
        if (*largest < a[i])
        {
            largest = &a[i];
        }
    }
    cout << "The largest number is " << *largest;

}
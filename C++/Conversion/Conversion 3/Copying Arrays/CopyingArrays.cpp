// Joyce Lin Arrays Copying Arrays 55 points 
#include <iostream>
using namespace std;

#define SIZE 10
int main() 
{
	int arr1[SIZE];
	for(int i=0;i<SIZE;i++)
    	arr1[i]=i;
	cout<<"Array 1 elements: ";
	for(int i=0; i<SIZE;i++)
    	cout<<arr1[i]<<" ";
	cout<<endl;
    
	int *arr2;
	arr2 = arr1;
	cout<<"Array 2 elements: ";
	for(int i=0; i<SIZE;i++)
    	cout<<arr2[i]<<" ";
    cout<<endl;
    cout<< "Changing element at index 3 in the second array to 100.";
    cout<<endl;
    arr2[3]=100;
    cout<<"Printing both the arrays after change";
    cout<<endl;
    cout<<"Array 1 elements: ";
    for(int i=0; i<SIZE;i++)
    	cout<<arr1[i]<<" ";
	cout<<endl;
    cout<<"Array 2 elements: ";
    for(int i=0; i<SIZE;i++)
    	cout<<arr2[i]<<" ";
	cout<<endl;
    
	return 0;
}
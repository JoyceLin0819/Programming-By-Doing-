// Joyce Lin Pointer #1
#include <iostream>

#include <string>


using namespace std;

void sayHello(string name){
    cout<<"Hello "<<name; // print out Hello
}


void sayHi(string &name){
    cout<<"Hi "<<name; // Print out Hi
}

int * larger(int *x, int *y){
    if(*x>*y) return x;
    else return y;
}

int main()
{
    string name = "World";
    // print out "Hello World"
    sayHello(name);
    cout<<endl;
    
    // initializing the pointer
    string *pName = &name;

    // print out Hi
    sayHi(*pName);

    int a = 5;
    int b = 1;
    // compare the address of a to address of b
    int *pNum = larger(&a,&b);

    // print out 5
    cout<<"\n"<<*pNum<<" is larger"<<endl;
    return 0;
}
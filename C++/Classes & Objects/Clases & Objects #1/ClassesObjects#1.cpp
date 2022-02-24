// Joyce Lin Class and Objects #1
#include <iostream>

using namespace std;

class Dog
{
    private: 
        int age;
        double weight;

    public: 
        // constructor
        Dog(int dAge, double dWeight)
        {
            age = dAge;
            weight = dWeight;
        }

        // Function that print out informations
        void getInfo()
        {
            cout << "Age: " << age << endl;
            cout << "Weight: " << weight << endl;
        }
};

int main()
{
    Dog dog1(10, 20.5);
    dog1.getInfo();

    return 0;
}
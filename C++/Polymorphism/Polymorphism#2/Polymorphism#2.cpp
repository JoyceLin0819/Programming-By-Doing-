// Joyce Lin Polymorphism #2
#include <iostream>

using namespace std;

class quadrilateral
{
    private: 
        double area;
        string type;
    
    public:
        quadrilateral(){}
        quadrilateral(int x) // create a square
        {
            type = "square";
            area = x*x;
        }

        quadrilateral(int w, int h) // create a rectangle
        {
            type = "rectangle";
            area = w*h;
        }

        quadrilateral(int b1, int b2, int h) // create a trapezoid
        {
            type = "trapezoid";
            area = (b1 + b2)*h/2;
        }

        string getType()
        {
            return type;
        }

        double getArea()
        {
            return area;
        }
};

int main()
{
    quadrilateral shape1(5);
    cout << "The area of " << shape1.getType() << ": " << shape1.getArea() << endl;

    quadrilateral shape2(5, 4);
    cout << "The area of " << shape2.getType() << ": " << shape2.getArea() << endl;
 
    quadrilateral shape3(2, 6, 4);
    cout << "The area of " << shape3.getType() << ": " << shape3.getArea() << endl;

    return 0;
}
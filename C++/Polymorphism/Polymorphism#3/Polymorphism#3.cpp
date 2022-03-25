// Joyce Lin Polymorphism #3
#include <iostream>

using namespace std;

class quadrilateral
{
    private: 
        double area;
        string type; // rectangle, square, trapezoid
    public:
        quadrilateral(){};
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

        changeShape(int x)
        {
            area = x*x;
        }

        changeShape(int w, int h)
        {
            area = w*h;
        }

        changeShape(int b1, int b2, int h)
        {
            area = (b1 + b2)*h/2;
        }
};

int main()
{
    quadrilateral shapes[3] = 
    {
            quadrilateral(6), 
            quadrilateral(6, 5), 
            quadrilateral(3, 6, 5)
    };

    quadrilateral squares[3];
    for(int i = 0; i < 3; i++)
    {
        squares[i] = quadrilateral(5-i);
    }

    squares[1].changeShape(6,6);

    // Array shape 
    cout << "The area of " << shapes[0].getType() << " with a side of 6 is " << shapes[0].getArea() << endl;
    cout << "The area of " << shapes[1].getType() << " with sides of 6 and 5 is " << shapes[1].getArea() << endl;
    cout << "The area of " << shapes[2].getType() << " with a bases of 3 and 6, height of 5 is " << shapes[2].getArea() << endl;

    cout << "\n";
    
    // Array squares
    cout << "The area of " << squares[0].getType() << " with a side of 5 is " << squares[0].getArea() << endl;
    cout << "The area of " << squares[1].getType() << " with sides of 6 and 6 is " << squares[1].getArea() << endl;
    cout << "The area of " << squares[2].getType() << " with a side of 3 is " << squares[2].getArea() << endl;

    return 0;
}
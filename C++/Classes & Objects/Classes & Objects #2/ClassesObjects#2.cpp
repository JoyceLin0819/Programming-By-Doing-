// Joyce Lin Classes & Objects #2
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class triangle
{
    public:
        int x1;
        int x2;
        int x3; 
        int y1;
        int y2;
        int y3;
        double side1 = 0;
        double side2 = 0;
        double side3 = 0;
        double area;

        // Constructor [P1(1,0), P2(3, 5), P3(9, 6)]
        triangle(int ax, int ay, int bx, int by, int cx, int cy)
        {
            x1 = ax;
            x2 = bx;
            x3 = cx;
            y1 = ay;
            y2 = by;
            y3 = cy;
        }

        void getDistance()
        {
            side1 = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2) * 1.0);
            side2 = sqrt(pow((x3-x2), 2) + pow((y3-y2), 2) * 1.0);
            side3 = sqrt(pow((x3-x1), 2) + pow((y3-y1), 2) * 1.0);
        }

        float getArea()
        {
            double s = (side1 + side2 + side3) / 2;
            area = sqrt(s * (s-side1) * (s-side2) * (s-side3));
            return area;
        }

        void getInfo()
        {
            cout << "P1: (" << x1 << ", " << y1 << ")" << endl;
            cout << "P2: (" << x2 << ", " << y2 << ")" << endl;
            cout << "P3: (" << x3 << ", " << y3 << ")" << endl;

            cout << "side 1: " << side1 << endl;
            cout << "side 2: " << side2 << endl;
            cout << "sode 3: " << side3 << endl;

            cout << "Area: " << area;
        }


};

int main()
{
    triangle T1(1, 0, 3, 5, 9, 6);
    T1.getDistance();
    T1.getArea();
    T1.getInfo();
    
    return 0;
}
// Joyce Lin Function Area Calculator 110 points 
#include <iostream>
#include<cmath>

using namespace std;

int unit_of_measure();
int area_square();
int area_rectangle();
int area_parallelogram();
int area_triangle();
int area_circle();
int area_trapezoid();
int area_sphere();
int area_cube();
int area_cylinder();
int welcome();

int main()
{
    welcome();
    string menu_ret;
    while ((menu_ret != "Yes") && (menu_ret != "yes") && (menu_ret != "No") && (menu_ret != "no"))
        {
        cout << "Would you like to return to the main menu?\n"
             << "Yes/No: ";
        cin  >> menu_ret;
        cout << "\n";
        }
    if ((menu_ret == "Yes") || (menu_ret == "yes"))
        {
        cout << "\n\n\n\n";
        main();
        }
    else
        cout << "Goodbye!";
    return(0);
}

int unit_of_measure()
{
    cout << "\nWill the unit of measure be in centimeters(C), inches(I), feet(F), or meters(M)?\n";
    cout << "Please make a selection: ";
    string selection;
    string units;
    cin  >> selection;

        while ((selection != "C") && (selection != "I") && (selection != "F") && (selection != "M"))
            {
            cout << "\n\nYou entered an invalid selection! Please try again.\n";
            cout << "Please enter a valid selection: ";
            cin  >> selection;
            }
        if (selection == "C")
            {
            units = "centimeters";
            }
        else if (selection == "I")
            {
            units = "inches";
            }
        else if (selection == "F")
            {
            units = "feet";
            }
        else if (selection == "M")
            {
            units = "meters";
            }
    return(0);
}

int area_square()
// A = One Side Squared
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        cout << "\n\nPlease enter the width of one of the sides:\n"
             << "Width Value: ";
        double a_sq_side;
        cin  >> a_sq_side;
        double a_sq = a_sq_side * a_sq_side;
        cout << "\n\nThe area of the square is " << a_sq << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_rectangle()
// A = Length * Width
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        cout << "\n\nPlease enter the length and height of the rectangle: \n"
             << "Length Value: ";
        double a_rec_l;
        cin  >> a_rec_l;
        cout << "\nHeight Value: ";
        double a_rec_w;
        cin  >> a_rec_w;
        double a_rec = a_rec_l*a_rec_w;
        cout << "\n\nThe area of the rectangle is " << a_rec << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_parallelogram()
// A = Base * Height
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        cout << "\n\nPlease enter the base and height of the parallelogram: \n"
             << "Base Value: ";
        double a_para_b;
        cin  >> a_para_b;
        cout << "\nHeight Value: ";
        double a_para_h;
        cin  >> a_para_h;
        double a_para = a_para_b*a_para_h;
        cout << "\n\nThe area of the parallelogram is " << a_para << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_triangle()
// A = (Base * Height)/2
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        cout << "\n\nPlease enter the base and height of the triangle: \n"
             << "Base Value: ";
        double a_tri_b;
        cin  >> a_tri_b;
        cout << "\nHeight Value: ";
        double a_tri_h;
        cin  >> a_tri_h;
        double a_tri = (a_tri_b*0.5)*(a_tri_h);
        cout << "\n\nThe area of the triangle is " << a_tri << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_circle()
// A = Pi * Radius Squared
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        double pi = 3.1415;
        cout << "\n\nPlease enter the radius of the circle: \n"
             << "Radius Value: ";
        double a_cir_rad;
        cin  >> a_cir_rad;
        double a_cir_rad_sq = a_cir_rad * a_cir_rad;
        double a_cir = a_cir_rad_sq * pi;
        cout << "\n\nThe area of the circle is " << a_cir << ".\n"
             << "The value of pi is: " << pi << "!\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_trapezoid()
// A = (Base 1 + Base 2) * Height/2
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        cout << "\n\nPlease enter the two bases and height of the trapezoid: \n"
             << "First Base Value: ";
        double a_trap_b1;
        cin  >> a_trap_b1;
        cout << "\nSecond Base Value: ";
        double a_trap_b2;
        cin  >> a_trap_b2;
        cout << "\nHeight Value: ";
        double a_trap_h;
        cin  >> a_trap_h;
        double a_trap = (a_trap_b1+a_trap_b2)*(a_trap_h*0.5);
        cout << "\n\nThe area of the trapezoid is " << a_trap << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_sphere()
// A = 4(Pi*Radius Squared)
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        double pi = 3.1415;
        cout << "\n\nPlease enter the radius of the sphere: \n"
             << "Radius Value: ";
        double a_sphere_rad;
        cin  >> a_sphere_rad;
        double a_sphere = (a_sphere_rad*a_sphere_rad)*(pi*4);
        cout << "\n\nThe area of the sphere is " << a_sphere << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_cube()
// Surface Area = 6(One Side Squared)
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        cout << "\n\nPlease enter the width of one of the sides: \n"
             << "Width Value: ";
        double a_cube_side;
        cin  >> a_cube_side;
        double a_cube_side_sq = a_cube_side*a_cube_side;
        double a_cube = a_cube_side_sq*6;
        cout << "\n\nThe area of the cube is " << a_cube << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int area_cylinder()
// Surface Area = 2(Pi*Radius*Height)
{
    string recalculate;
    unit_of_measure();
    //Get unit of measure then calculate:
    while ((recalculate != "No") && (recalculate != "no"))
        {
        double pi = 3.1415;
        cout << "\n\nPlease enter the radius and height of the cylinder: \n"
             << "Radius Value: ";
        double a_cyl_rad;
        cin  >> a_cyl_rad;
        cout << "\nHeight Value: ";
        double a_cyl_h;
        cin  >> a_cyl_h;
        double a_cyl = (pi*a_cyl_rad)*(a_cyl_h*2);
        cout << "\n\nThe area of the cylinder is " << a_cyl << ".\n"
             << "Would you like to enter different measurements?\n"
             << "Yes/No: ";
        cin  >> recalculate;
        }
    return(0);
}

int welcome()

{
    cout << "*****************************************************\n"
         << "*      Welcome to Avatarati's Area Calculator!      *\n"
         << "*****************************************************\n\n\n\n"
         << "Which shape would you like to calculate the area for?\n\n"
         << "Please choose from the following:\n\n"
         << "1. Square\n"
         << "2. Rectangle\n"
         << "3. Parallelogram\n"
         << "4. Triangle\n"
         << "5. Circle\n"
         << "6. Trapezoid\n"
         << "7. Sphere\n"
         << "8. Cube\n"
         << "9. Cylinder\n\n"
         << "Please enter a numerical selection: ";
    int input_welcome;
    cin  >> input_welcome;
        while ((input_welcome <= 0) && (input_welcome > 9))
            {
            cout << "\n\nYou have entered an invalid selection!\n"
                 << "Please enter a valid selection: ";
            cin  >> input_welcome;
            }
        if (input_welcome == 1)
            {
            area_square();
            }
        else if (input_welcome == 2)
            {
            area_rectangle();
            }
        else if (input_welcome == 3)
            {
            area_parallelogram();
            }
        else if (input_welcome == 4)
            {
            area_triangle();
            }
        else if (input_welcome == 5)
            {
            area_circle();
            }
        else if (input_welcome == 6)
            {
            area_trapezoid();
            }
        else if (input_welcome == 7)
            {
            area_sphere();
            }
        else if (input_welcome == 8)
            {
            area_cube();
            }
        else if (input_welcome == 9)
            {
            area_cylinder();
            }
    return(0);
}

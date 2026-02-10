/*
                                                      Program Name : Compile Time Polymorphism
                                                      File Name    : POLY.CPP
                                                      Author       : Jay Gorfad
                                                      Date         : 9-2-26
                                                      Objective    : To demonstrate compile time polymorphism using function overloading in C++.
*/
/*
Polymorphism
    Ability of a function to take more than one form.

Types of Polymorphism
    1) Compile Time Polymorphism
    2) Run Time Polymorphism

Compile Time Polymorphism:
    If a class contains more than one function with the
    same name but different arguments, then it is called
    compile time polymorphism.
    This is achieved using function overloading.

Run Time Polymorphism:
    If there are two classes (super class and sub class)
    and both contain functions with the same name and
    same arguments, and the sub class function overrides
    the super class function, then it is called run time
    polymorphism.
*/
#include <iostream>
using namespace std;
#include <conio.h>

class Shape
{
private:
    int length, breadth;
    float radius, ans;
    float PI;

public:
    Shape()
    {
        cout << "\nThis is the default Constructor";
        length = 0;
        breadth = 0;
        radius = 0.0;
        ans = 0.0;
        PI = 3.14;
    }

    // Area of square
    void area()
    {
        ans = length * length;
        cout << "\nThe area of the square is " << ans;
    }

    // Area of rectangle
    void area(int l, int b)
    {
        length = l;
        breadth = b;
        ans = length * breadth;
        cout << "\nThe area of the rectangle is " << ans;
    }

    // Area of circle
    void area(float r)
    {
        radius = r;
        ans = PI * radius * radius;
        cout << "\nThe area of the circle is " << ans;
    }
};

int main()
{
    Shape obj;
    obj.area();        // square
    obj.area(2, 3);    // rectangle
    obj.area(3.4);     // circle

    getch();
    return 0;
}

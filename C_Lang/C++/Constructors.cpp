/*
                                             Program Name : Constructor Demonstration Program
                                             File Name    : CONSTRUC.CPP
                                             Author       : <Jay Gorfad>                                             
                                             DOc          :  4-2-26
                                             Objective    : To demonstrate Default, Parameterized and Copy Constructor in C++                    
*/

/* ✅ Theory / Text Section (Exactly image jevu) 
 
private
    visibility scope is default identifier
    they cannot be accessed by the object directly
    they must be called using the public member function
    private members cannot be inherited

public
    they are accessed by the object directly
    they are also called using the member function
    public members are inherited
    and can be accessed outside the class

protected
    they cannot be accessed by the object directly
    they are accessed using public member functions
    they can be inherited in the derived class
*/

#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>
class A{
      private:
            int x, y;
            int p, q;


    public:
    A()   // Default Constructor
    {
        cout << "\n This is my default constructor";
        x = 0;
        y = 0;
        p = 0;
        q = 0;
        r = 0;
        s = 0;
    }

    // Parameterized Constructor
    A(int a, int b, int c, int d, int e, int f)
    {
        cout << "\n These are the values of parameterised constructor";
        x = a;
        y = b;
        p = c;
        q = d;
        r = e;
        s = f;
    }

    // Copy Constructor
    A(A &obj1)
    {
        cout << "\n These are the values of copy constructor";
        x = obj1.x;
        y = obj1.y;
        p = obj1.p;
        q = obj1.q;
        r = obj1.r;
        s = obj1.s;
    }

    // Display Function
    void display()
    {
        cout <<x<<"\t"<<y<<"\t"<<p<<"\t"<<q<<"\t"<<r<<"\t"<<s;
    }

    
     protected:
           int r, s;
};

int main()
{
   // clrscr();

    A obj; // Default constructor
    obj.display();

    A obj1(2, 3, 4, 5, 6, 7); // Parameterized constructor
    obj1.display();

    A obj2(obj1); // Copy constructor
    obj2.display();

  //  getch();
    return 0;
}

// End of Program

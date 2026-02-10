/*
                                             Author       : <Jay Gorfad>                                             
                                             DOc          :  3-2-26
                                             Objective    : Program to Demonstrate Class and Object Using Member Functions;
                                                            Class and Object Program
                                                            Addition and Subtraction Using Class                   
*/


#include <iostream>    // .h
using namespace std;  //
#include<conio.h>
class A{
     private:
        int x,y,z;
     public:
        void add();
        void sub();
};
void A::add(){ // scope resoultion operator
      cout<<"\nEnter the value of X";
      cin>>x;
      cout<<"\nEnter the value of Y";
      cin>>y;
      z=x+y;
      cout<<z;
}
void A::sub(){ 
      cout<<"\nEnter the value of x and y";
      cin>>x>>y;
      z=x-y;
      cout<<z;
}
int main(){
    A obj;
    obj.add();
    obj.sub();
    getch();
    return 0;
}
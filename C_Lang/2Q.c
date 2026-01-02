/*
                            Author-:Jay Gorfad
                            Doc-:11-12 Oct 2025
                            Objective-:To learn the data type and token


    Primitive 
-----------------
        int --> %d %i 2 bytes sizeof(int) range-> -32768 to 32767
                2 bytes 2*8 16 bits 2^16 65536/2=32768 -32768 0 32767
        
        float --> 4 bytes 4*8 =32 2^32=  %f

        double --> 8bytes %lf

        char --> %c

        long int --> %ld
            int rollno=23
_________________________________________________________________________________________________________________________________________________________________________

    Derived
---------------      
Dis   array --> int rollno[30];  -0------29   // array is Do's not will multiple data type 

        function

        pointer

_________________________________________________________________________________________________________________________________________________________________________

    Userdefined
-----------------
        structure
            struct Student{
                 int sid;
                 char name[30];
                 float fees;
            }s1;
        union

_________________________________________________________________________________________________________________________________________________________________________

    Token
-----------
        smallest individual unit of program
        keyword
          those words which cannot be changed
                int float double include
        idetifier int x=3
        constatnts PI=3.14

    Operators
--------------
        a+b  a-->operand  +  operator  b  operand
        operaots symbols which operates on operand
        a+b binary operation
        ++a unary  operation
        c=a>b?2:3 ternary operation

    operators
--------------
        Arithmeitc
          +,-,*,/,%

        increment decrement
          ++ --
          ++a pre increment a++ post increment
          --a pre increment a-- post increment
        
        bitwise
          & | ^ << >>

        relational
          >= <= == !=

        asignement = a=2(a==2)
        
        logical
           && || !

        special ; , sizeof



            x=3      y=6
            2|3      2|6
             |1-1    2|3-0
                     2|1-1

        011
        110
      -------
    &   0 1 0
        4 2 1
      ---------
      0 + 2 + 0=2
      011
      110
    ------
     1 1 1
     4 2 1=7


   Desimle
------------

     011
     110
    ------
    1 0 1-----
    4 2 1
    4 0 1=5


    LSB 
    MSB
rigth shirft
------------
    6>>1
    011



Left shirft
-----------    
    6<<2
    000

*/      

#include<stdio.h>
#include<conio.h>
int main()
{
    int x=3;
    int y=6;

    printf("\nx&y--%d---",x&y);
    printf("\nx|y--%d---",x|y);
    printf("\nx<<1--%d---",x<<1);
    printf("\nx>>y--%d---",x>>y);
    printf("\nx^y--%d---",x^y);

    getch();
}
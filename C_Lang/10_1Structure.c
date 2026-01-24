/*
                                                Author    : Jay Gorfad
                                                Date      : 8-1-2026
                                                Program   : Student Record Management using Structure
                                                Objective : To store and display student information (ID, Name, Fees) using structure with menu driven program.
*/




/*


Structure and which data type does it belongs
---------------------------------------------
    Data Type
     
     Three Data Type

      Primitive
      ---------     
               int  float  double  char

               int  rolno=23

      Derived
      --------
              Array  function  pointer

              int rolno[20] 


      User Defined
      ------------
                  Structure and union

                  Struct Student{
                          
                        int sid;

                        char name[30];

                        float fees;
                  }s1;

*/
#include<stdio.h>
#include<stdlib.h>
struct student{
    int sid;
    char name[30];
    float fees; // Stucture members
}s1,s2; // variables of structure

void scanStudentDetails(); // declaration
void displayStudentDetails();
int main(){

    int choice;

    while(1){
      //clrscr();
      printf("\n1-------------scanStudent");
      printf("\n2-------------displayStudentDetails");
      printf("\n3-------------Exit");
      printf("\nEnter the choice : ");
      scanf("%d",&choice);
      switch(choice){
                case 1:scanStudentDetails();
                     break;
                case 2:displayStudentDetails();
                     break;
                case 3:exit(0);
            
      } //end of switch
           //Turbo c++ // getch();
    }//end of while
   return 0;
} // end main

void scanStudentDetails(){
    printf("\nEnter Student 1 ID: ");
    scanf("%d",&s1.sid);

    printf("Enter Student 1 Name: ");
    scanf(" %[^\n]", s1.name);

    printf("Enter Student 1 Fees: ");
    scanf("%f",&s1.fees);

    printf("\nEnter Student 2 ID: ");
    scanf("%d",&s2.sid);

    printf("Enter Student 2 Name: ");
    scanf(" %[^\n]", s2.name);

    printf("Enter Student 2 Fees: ");
    scanf("%f",&s2.fees);

}
void displayStudentDetails(){
    printf("\nStudentid\tName\tFees");
    printf("\n%d\t\t%s\t%.2f",s1.sid, s1.name, s1.fees);
    printf("\n%d\t\t%s\t%.2f",s2.sid, s2.name, s2.fees);
}




/*                          TUurbo C++
void scanStudentDetails(){
    printf("\nEnter the value of id name and fees for Student 1 : ");
    scanf("%d%29[^\n]%f",&s1.sid,s1.name,&s1.fees);

    printf("\nEnter the value of id name and fees for Student 2 : ");
    scanf("%d%29[^\n]%f",&s2.sid,s2.name,&s2.fees);
}
*/ 






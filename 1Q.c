#include<stdio.h>  //# --> pre processor  |  include--> directive
#include<conio.h>
#include<process.h>
#include<stdlib.h>
int main()
{
    int choice;


    printf("\n1------South Indian");
    printf("\n2------Gujrati");
    printf("\n3------Punjabi");
    printf("\n4------rajasthani");
    printf("\n5------Exit");
    printf("\nEnter the choice");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:printf("\nYou have selected South Indian");
         break;
    
    case 2:printf("\nYou have selected Gujrati");
         break;

    case 3:printf("\nYou have selected Punjabi");
         break;

    case 4:printf("\nYou have selected rajasthani");
         break;

    case 5:exit(EXIT_SUCCESS); // lebriri Function       0

    default:
        break;
    } // end of switch

        getch();
}  //end of main




// command line programing
/*
int main(int argc,char *argv[])   // Group of argument  
{
     printf("\nThe number of argument is %d",argc);
     printf("\nThe first argument %s",argv[0]);
     printf("\nThe Second argument %s",argv[1]);
     printf("\nThe Third argument %s",argv[2]);

}*/

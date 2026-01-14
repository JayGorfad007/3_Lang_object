/*

                                                    Author-:Jay Gorfad
                                                    Doc-:18-12 Oct 2025
                                                    Objective-:To Create Horizontal Vertical traingle
                                                    Lacture-:5

                                                  
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l,t,c,r;
    int not,choice,row;
    start:
    printf("\n1------Horizontal");
    printf("\n2------Vertical traingle");
    printf("\n3------Exit");
    printf("\nEnter the choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("\nEnter the number of traingle");
               scanf("%d",&not);
               printf("\nEnter the row");
               scanf("%d",&row);
               for(l=1; l<=row; l++){
                for(t=1; t<=not; t++){
                 for(i=1; i<=l; i++){
                    printf("*");
                 }
                 printf("\t");
                }
                printf("\n");
               }// end of outer most
             break; 
        case 2:printf("\nEnter the number of traingle");
               scanf("%d",&not);
               printf("\nEnter the row");
               scanf("%d",&row);
               for(t=1; t<=not; t++){
                for(r=1; r<=row; r++){
                 for(c=1; c<=r; c++){
                    printf("*");
                 }
                 printf("\n");
                }
                printf("\n");
               }// end of outer most
             break;
        case 3: exit(0);
    }
    return 0; 
    goto start;
}


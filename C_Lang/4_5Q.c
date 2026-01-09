/*

                                                    Author-:Jay Gorfad
                                                    Doc-:15-12 Oct 2025
                                                    Objective-:To Create a class
                                                    Lacture-:4

                                                   Characgter -> ! @ # $ % & * print
*/
#include<stdio.h>
int main()
{
    int i,j;
    int row;
    char ch;
    printf("\nEnter the row");
    scanf("%d",&row);
    printf("\nEnter the Character");
    scanf(" %c",&ch);
    

    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
                printf("%c",ch);
        }
        printf("\n");
    } 
    return 0;
}
 
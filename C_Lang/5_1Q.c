/*

                                                    Author-:Jay Gorfad
                                                    Doc-:18-12 Oct 2025
                                                    Objective-:To Create a 3 star-triangles side-by-side 
                                                    Lacture-:5

                                                  
*/
#include<stdio.h>
int main()
{
   int i,j,k,l;
 
  for(l=1; l<=7; l++){

    for(i=1; i<=l; i++)
    {
             printf("*");
    }
    printf("\t");

    for(j=1; j<=l; j++)
    {
        printf("*");
    }
    printf("\t");

    for(k=1; k<=l; k++)
    {
        printf("*");
    }
  printf("\n");
}
  return 0;
}
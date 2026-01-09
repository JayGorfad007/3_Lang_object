/*

                                                    Author-:Jay Gorfad
                                                    Doc-:15-12 Oct 2025
                                                    Objective-:To Create 3 star-triangles side-by-side  -> Short Cut
                                                    Lacture-:5

                                                  
*/
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1; i<=5; i++)
    {
      for(k=1; k<=5; k++)
      {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\t");
       }  
       printf("\n");
    }
    return 0;
}
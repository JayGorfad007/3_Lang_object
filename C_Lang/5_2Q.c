/*

                                                    Author-:Jay Gorfad
                                                    Doc-:18-12 Oct 2025
                                                    Objective-:To Create 3 star-triangles side-by-side  -> Short Cut
                                                    Lacture-:5

                                                  
*/

/*#include<stdio.h>
int main()
{
    // only Turbo c++ Code 
    int i,j,l;

    for(i=1; i<=5; i++){
      for(l=1; l<=5; l++){
        if(l==1){
            textcolor(4);
        }else if(l==2){
            textcolor(2);
        }else if(l==3){
            textcolor(14);
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\t");
       }  
       printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
 
    int i,j,l;

    for(i=1; i<=5; i++){
      for(l=1; l<=3; l++){
        if(l==1){
            printf("\033[31m");
        }else if(l==2){
            printf("\033[32m");
        }else if(l==3){
            printf("\033[33m");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\t");
       }  
       printf("\n");
    }
    return 0;
}
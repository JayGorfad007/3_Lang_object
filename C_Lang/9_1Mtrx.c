/*
                                                        Author    : Jay Gorfad
                                                        Date      : 5-1-2026
                                                        Program   : Addition of Two 3×3 Matrices
                                                        Objective : To add two matrices and store result in third matrix
                                                        Lecture   : 9
*/
#include<stdio.h>
#define ROW 3
#define COL 3
#define SIZE 3
int main()
{
    int a[ROW][COL];
    int b[ROW][COL];
    int c[ROW][COL];
    int i,j,k;
    
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("\nEnter the values of A[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }//end of inner for

    }//end of outer for 

     for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("\nEnter the values of B [%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }//end of inner for
    }//end of outer for 

    
     for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("%d ",a[i][j]);
    
        }//end of inner for
        printf("\n");
    }//end of outer for 
    printf("\n");

    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("%d ",b[i][j]);
    
        }//end of inner for
        printf("\n");
    }//end of outer for
    printf("\n");

    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            
            c[i][j]=a[i][j]+b[i][j];
    
        }//end of inner for
        printf("\n");
    }//end of outer for
  
 
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){

            printf("%d ",c[i][j]);
    
        }//end of inner for

        printf("\n");

    }//end of outer for

    

    return 0;
}
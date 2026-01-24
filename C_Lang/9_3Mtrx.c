/*
                                                          Author    : Jay Gorfad
                                                          Date      : 5-1-2026
                                                          Program   : Matrix Multiplication Program
                                                          Objective : To multiply two matrices using nested loops in C
*/

/*
                                              Data Type 
                                            --------------

        Primitive Data Type     |           Derived Data Type           |         User Define Data Type
    --------------------------- |  -----------------------------------  |  ----------------------------------
    | 10 |  | 3.14 |  | 'A" |   |  | {1,2,3} |  | *ptr |  | {struct} |  |  |typedef|  |Enum|  |Struct|  
    ------   ------   -------   |  -----------  --------  ------------  |  --------- -------- |Student|
     int     float     char     |    Array       Pointer   Structure    |   typedef    Enum   ---------
                                                                                               Struct
    

                
                                                      
                                                                     4 Columns
                                                    <------------------------------------------------->
                                                        0                1                2              3
                                                  ---------------------------------------------------------------            
                     int  matrix[3][4];       0 ^ | matrix[0][0] | matrix[0][1] | | matrix[0][2] | matrix[0][3] | 
                                                | ---------------|--------------|-----------------------------  |
                                              1 | | matrix[1][0] | matrix[1][1] | | matrix[1][2] | matrix[1][3] |
                                           Rows | ---------------|--------------|-----------------------------  |
                                              2 | | matrix[2][0] | matrix[2][1] | | matrix[2][2] | matrix[2][3] |
                                                | ---------------------------------------------------------------
                                                  
                                                                 3 X 4 Array 

                                                                 Arrya is: Static 

                                                                 Static mins: Fix value

                                                                 Array is: Not daynamic

                                                                 Posible is: Pointer
*/

// Pandding dry-run Lacture 5-1-26

#include<stdio.h>
#define ROW 30 
#define COL 30

int main()
{
         int a[ROW][COL];
         int b[ROW][COL];
         int c[ROW][COL]={0}; // sum=sum+num     
         int r1,r2,c1,c2;
         int i,j,k; 

         printf("\nEnter the value of r1 and c1");
         scanf("%d%d",&r1,&c1);
         
         printf("\nEnter the value of r2 and c2");
         scanf("%d%d",&r2,&c2);
         
         if(c1==r2){

         for(i=0;i<3;i++){
          for(j=0;j<3;j++){
            printf("\nEnter the value of A[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
          } // end of inner for

         }// end of outer for
         
         
         for(i=0;i<3;i++){
          for(j=0;j<3;j++){
            printf("\nEnter the value of B[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
          } // end of inner for

         }// end of outer for



            for(i=0;i<3;i++){

              for(j=0;j<3;j++){

                  for(k=0;k<3;k++){
                     
                    c[i][j] = c[i][j] + a[i][k]*b[k][j]; 
                  } // end of inner for

              } // end of outer for
                
            } // end of outer most

          printf("\nThe resulatant matrix is\n");
          for(i=0;i<3;i++){
            for(j=0;j<3;j++){
              printf("%d ",c[i][j]);
            }//end of inner for
            printf("\n");
          }//end of outer for
         }else{

            printf("\nSorry the matrix are not conformable to multiply");

         } // end of if

         return 0;
}

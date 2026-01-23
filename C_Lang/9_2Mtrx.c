/*
                                    Author    : Jay Gorfad
                                    Date      : 5-1-2026
                                    Objective : To Matrix Two Addition Program   : Addition of Two 3×3 Matrices -> Side by Side ROW an Color
                                    Lecture   : 9

*/                                        
#include <stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int a[ROW][COL];
    int b[ROW][COL];
    int c[ROW][COL];
    int i, j;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nEnter the values of A[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        } // end of inner for

    } // end of outer for

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nEnter the values of B [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        } // end of inner for

    } // end of outer for

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        } // end of inner for

    } // end of outer for

    printf("\nA-Matrix\tB-Matrix\tC-Matrix\n");
    for (i = 0; i < ROW; i++)
    {

        for (j = 0; j < COL; j++){
            printf("%d", a[i][j]);
        }

        printf("\t\t");

        for (j = 0; j < COL; j++){
            printf("%d", b[i][j]);
        }

        printf("\t\t");

        for (j = 0; j < COL; j++){
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}// end of main



                                                                //  Turbo C++
/*
#include <stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int a[ROW][COL];
    int b[ROW][COL];
    int c[ROW][COL];
    int i, j;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nEnter the values of A[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        } // end of inner for

    } // end of outer for

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\nEnter the values of B [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        } // end of inner for

    } // end of outer for

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        } // end of inner for

    } // end of outer for

    printf("\nA-Matrix\tB-Matrix\tC-Matrix\n");
    for (i = 0; i < ROW; i++)
    {

        for (j = 0; j < COL; j++){
             //textcolor(2);
            printf("%d", a[i][j]);
        }

        printf("\t\t");

        for (j = 0; j < COL; j++){
            //textcolor(2);
            printf("%d", b[i][j]);
        }

        printf("\t\t");

        for (j = 0; j < COL; j++){
            //textcolor(2);
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;


   
} */

/*
      printf("\nA-Matrix\tB-Matrix\tC-Matrix\n");
    for (i = 0; i < ROW; i++)
    {

        for (j = 0; j < COL; j++){
          if(j==0){
            textcolor(2);
          }else if(j==2){
            textcolor(2);
          }else if(j==3){
            textcolor(4);
          }
            printf("%d", a[i][j]);
        }

        printf("\t\t");

        for (j = 0; j < COL; j++){
          if(j==0){
            textcolor(2);
          }else if(j==1){
            textcolor(2);
          }else if(j==1){
            textcolor(4);
          } 
            printf("%d", b[i][j]);
        }

        printf("\t\t");

        for (j = 0; j < COL; j++){
          if(j==0){
            textcolor(2);
          }else if(j==1){
            textcolor(2);
          }else if(j==1){
            textcolor(4);
          }
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

*/
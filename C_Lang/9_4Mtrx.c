/*
                                                        Author    : Jay Gorfad
                                                        Date      : 7-1-2026
                                                        Program   : Sorting of 2D Matrix using Bubble Sort
                                                        Objective : To sort elements of a 3×3 matrix by converting it into 1D array and applying bubble sort
*/



#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int a[ROW][COL],b[ROW*COL];
    int i,j,k; 
    int temp,exch=1;
    int SIZE=ROW*COL;

    // Step-1 2D scanning
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("\nEnter the value of A[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }// end of inner for

    }// end of outer for


    // Step-2 printfting of unsorted 2d
    printf("\nThe unsorted 2D is\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%d\t",a[i][j]);
        }// end of inner for
        printf("\n");
    }// end of outer for

    // Step-3 convert 2d into id
    k = 0;   // ✅ Reset k
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            b[k]=a[i][j];
            k++;
        }// end of inner for

    }// end of outer for


    // Step-4 Buble Sort appy to one D
    
    for(i=0; i<SIZE && exch==1; i++){
        exch=0;
        for(j=0;j<SIZE-1;j++){
            if(b[j]>b[j+1]){
                exch=1;
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }// end of if
        }// end of inner for
    }// end of outer for


    // ✅ Step-5: Convert Sorted 1D → Back to 2D
    k = 0;  // ✅ Reset k again (MAIN FIX)
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            a[i][j]=b[k];
            k++;
        }// end of inner for

    }// end of outer for

    //Step-6 print the sorted 2D

    printf("\nThe sorted 2D is\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%d\t",a[i][j]);
        }// end of inner for
        printf("\n");
    }// end of outer for

    return 0;

}
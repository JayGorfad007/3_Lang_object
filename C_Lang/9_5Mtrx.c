/*
                                                        Author    : Jay Gorfad
                                                        Date      : 7-1-2026
                                                        Program   : Sorting of 2D Matrix using Bubble Sort
                                                        Objective : To sort all elements of a matrix by converting it into 1D array and applying bubble sort.
                                                        Daynamic  : Programm
*/

#include<stdio.h>

int main()
{
    int ROW, COL;
    int a[30][30], b[900];
    int i, j, k;
    int temp, exch = 1;
    int SIZE;

    // ✅ Step-1: Input rows and columns
    printf("Enter number of Rows : ");
    scanf("%d", &ROW); //2

    printf("Enter number of Columns : ");
    scanf("%d", &COL); //3

    SIZE = ROW * COL;

    // ✅ Step-2: Input Matrix
    printf("\nEnter Matrix Elements:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // ✅ Step-3: Display Unsorted Matrix
    printf("\n--- Unsorted Matrix ---\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // ✅ Step-4: Convert 2D → 1D
    k = 0;
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            b[k] = a[i][j];
            k++;
        }
    }

    // ✅ Step-5: Bubble Sort on 1D Array
    for(i = 0; i < SIZE && exch == 1; i++) {
        exch = 0;

        for(j = 0; j < SIZE - 1; j++) {
            if(b[j] > b[j + 1]) {
                exch = 1;
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    // ✅ Step-6: Convert 1D → 2D
    k = 0;
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            a[i][j] = b[k];
            k++;
        }
    }

    // ✅ Step-7: Display Sorted Matrix
    printf("\n--- Sorted Matrix ---\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

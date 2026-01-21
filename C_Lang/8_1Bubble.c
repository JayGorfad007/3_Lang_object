/*
                                                                 Author    : Jay Gorfad
                                                                 Date      : 2-1-2026
                                                                 Objective : To Bubble Short
                                                                 Lecture   : 8
                                                                 
*/
#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE];
    int i,j,temp;

    for(i=0; i<SIZE; i++){
        printf("\nEnter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\nThe unsorted arr is\n");
    for(i=0; i<SIZE; i++){
        printf("%d\t",a[i]);
    }

    for(i=0; i<SIZE; i++){
        for(j=0; j<SIZE-1; j++){
            if(a[j] > a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nThe sorted Array is\n");
    for(i=0; i<SIZE; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
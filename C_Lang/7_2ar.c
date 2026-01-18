/*
                                                                 Author    : Jay Gorfad
                                                                 Date      : 25-12 Oct 2025
                                                                 Objective : To Array
                                                                 Lecture   : 7
                                                                 
*/
/*
    int y=5;

    array --> :collection data value which belongs to same data type

    int x[5];
             advantage -: we can store multiple values with same name
             dis       -: you can not store multiple data type with same name
                          the memory may get wasted if the size define not used
*/ 

#include<stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE];
    int b[SIZE];
    int c[SIZE];
    int i;

    for(i=0; i<5; i++){
        printf("\nEnter the value of a[%d] : ",i);
        scanf("%d",&a[i] );
    }
    
    for(i=0; i<5; i++){
        printf("%d\t",a[i]);    // printf("a[%d] %d\t",a[i],i);
    }

    for(i=0; i<5; i++){
        printf("\nEnter the value of b[%d] : ",i);
        scanf("%d",&b[i] );
    }
    
    for(i=0; i<5; i++){
        printf("%d\t",b[i]);    // printf("a[%d] %d\t",a[i],i);
    }

    for(i=0; i<5; i++){
          c[i]=a[i]+b[i];
    }

    printf("\nThe addition is as follows\n");
    for(i=0; i<SIZE; i++){
        printf("\n%d + %d = %d",a[i],b[i],c[i]);
    }
    return 0;
}
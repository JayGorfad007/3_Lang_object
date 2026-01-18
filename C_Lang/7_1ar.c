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
int main()
{
    int a[5];
    int i;

    for(i=0; i<5; i++){
        printf("\nEnter the value of a[%d] : ",i);
        scanf("%d",&a[i] );
    }
    
    for(i=0; i<5; i++){
        printf("%d\t",a[i]);    // printf("a[%d] %d\t",a[i],i);
    }

}
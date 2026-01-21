/*
                                                                 Author    : Jay Gorfad
                                                                 Date      : 2-1-2026
                                                                 Objective : To
                                                                 Lecture   : 8
                                                                 
*/
#include<stdio.h>
#define SIZE 5
int main()
{
    int x[SIZE];
    int i;
    int key;
    int low=0;
    int high=SIZE-1;
    int mid=(low+high)/2;
    int index=-1;
    printf("\nEnter the five values of array in sorted form : ");
    for(i=0; i<SIZE; i++){
        scanf("%d",&x[i]);
    }// end of for

     printf("\nThe sorted array is \n");
    for(i=0;i<SIZE;i++){
        printf("%d ",x[i]);
    }//end of for
        printf("\nEnter the key vlaue : ");
        scanf("%d",&key);

        while(low<=high){
            if(key==x[mid]){  
                index=mid;
                break;

            }else if(key<x[mid]){
                high=mid-1;

            }else{
                low=mid+1;
            }//end of else
            mid=(low+high)/2;
        }// end of while

        if(index>=0){
            printf("\nThe key value %d is located at %d index",key,index);
        }else{
            printf("\nThe key value not found");
        }
    return 0;  
}// end of main
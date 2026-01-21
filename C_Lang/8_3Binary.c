/*
                                                                 Author    : Jay Gorfad
                                                                 Date      : 2-1-2026
                                                                 Objective : To 2️⃣ Recursive Binary Search
                                                                 Lecture   : 8
                                                                 My : Code GPT
*/
#include<stdio.h>
#define SIZE 5

int binarySearch(int x[], int low, int high, int key)
{
    int mid;
    if(low <= high)
    {
        mid = (low + high) / 2;

        if(x[mid] == key)
            return mid;
        else if(key < x[mid])
            return binarySearch(x, low, mid - 1, key);
        else
            return binarySearch(x, mid + 1, high, key);
    }
    return -1;
}

int main()
{
    int x[SIZE], i, key, index;

//  printf("Enter %d sorted elements:\n", SIZE);
    for(i = 0; i < SIZE; i++){
        printf("\nEnter the five values of array in sorted form : ");
        scanf("%d", &x[i]);
    }
    printf("Enter key value: ");
    scanf("%d", &key);

    index = binarySearch(x, 0, SIZE - 1, key);

    if(index != -1)
        printf("Key found at position %d", index + 1);
    else
        printf("Key not found");

    return 0;
}

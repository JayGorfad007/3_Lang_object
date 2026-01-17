#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    int len1=0,len2=0;
    int i;
    
    printf("\nEnter the string1 : ");
    fgets(str1, sizeof(str1), stdin);            //scanf("%[^\n]s",str1);                       //gets(str1);

    printf("\nEnter the string2 : ");
    fgets(str2, sizeof(str2), stdin);     //scanf("%[^\n]s",str2);                       //gets(str2);
    
    for(i=0; str1[i]!='\0'; i++)
    {
        len1++;
    }

    for(i=0; str2[i]!='\0'; i++)
    {
        len2++;
    }

    printf("\nThe lenght of string %s is %d",str1,str1);
    printf("\nThe lenght of string %s is %d",str2,str2);

    return 0;   
} 
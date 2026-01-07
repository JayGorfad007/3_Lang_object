/*             29-12-25 First_Lac                            */ 
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int i,len=0;

    printf("\nEnter Name : ");
    scanf("%s", name);

    printf("\nName : %s",name);

    //len = strlen(name);

    for(i=0; name[i]!='\0'; i++)
    {
        len++;
    }

    printf("\nName length : %d",len);

    return 0;

}
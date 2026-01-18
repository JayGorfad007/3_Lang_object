/*
                                                                 Author    : Jay Gorfad
                                                                 Date      : 24-12 Oct 2025
                                                                 Objective : To Revers concate  length
                                                                 Lecture   : 6
                                                                 my        : code Cgpt
*/

#include<stdio.h>

int main()
{
    char str1[30], str2[30], str3[30];
    int len1 = 0, len2 = 0;
    int i, j = 0;
    int flag = 0;

    printf("Enter the string1 : ");
    scanf(" %[^\n]", str1);

    printf("Enter the string2 : ");
    scanf(" %[^\n]", str2);

    // Length of str1
    for(i = 0; str1[i] != '\0'; i++)
        len1++;

    // Length of str2
    for(i = 0; str2[i] != '\0'; i++)
        len2++;

    printf("\nLength of string1 = %d", len1);
    printf("\nLength of string2 = %d", len2);

    // Reverse str1
    for(i = len1 - 1; i >= 0; i--)
        str3[j++] = str1[i];

    str3[j] = '\0';
    printf("\nReverse of %s is %s", str1, str3);

    // Concatenate str2 to str1
    j = 0;
    for(i = len1; i < len1 + len2; i++)
        str1[i] = str2[j++];

    str1[i] = '\0';
    printf("\nConcatenated string = %s", str1);

    // String comparison
    if(len1 != len2)
    {
        flag = -1;
    }
    else
    {
        for(i = 0; i < len1; i++)
        {
            if(str1[i] != str2[i])
            {
                flag = -1;
                break;
            }
        }
    }

    if(flag == -1)
        printf("\nStrings are NOT equal");
    else
        printf("\nStrings are EQUAL");

    return 0;
}

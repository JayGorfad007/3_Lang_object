/*

                                                    Author-:Jay Gorfad
                                                    Doc-:18-12 Oct 2025
                                                    Objective-:To find length of strings without using strlen()
                                                    Lacture-:6 

                                                  
*/
#include <stdio.h>

int main()
{
    char str1[30];
    char str2[30];
    int len1 = 0, len2 = 0, i;

    printf("Enter the string1 : ");
    scanf(" %[^\n]", str1);   // leading space IMPORTANT

    printf("Enter the string2 : ");
    scanf(" %[^\n]", str2);

    for(i = 0; str1[i] != '\0'; i++){
        len1++;
    }

    for(i = 0; str2[i] != '\0'; i++){
        len2++;
    }

    printf("\nThe length of string_1 \"%s\" is %d", str1, len1);
    printf("\nThe length of string_2 \"%s\" is %d", str2, len2);

    return 0;
}

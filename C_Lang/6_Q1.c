/*

                                                    Author-:Jay Gorfad
                                                    Doc-:18-12 Oct 2025
                                                    Objective-:To use the string functions
                                                    Lacture-:6 my code Cht.G

                                                  
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    char str2[30];
    int len1 = 0, len2 = 0;
    int i;

    printf("Enter the string1 : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the string2 : ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str1
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        len1++;
    }

    // Remove newline from str2
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        len2++;
    }

    printf("\nThe length of string \"%s\" is %d", str1, len1);
    printf("\nThe length of string \"%s\" is %d", str2, len2);

    return 0;
}



/*

                            Author-:Jay Gorfad
                            Doc-:15-12 Oct 2025
                            Objective-:To learn the if_else



logical
--------
    &&
    ||
    !

Relational
---------
      >=
      <=
      ==

*/
#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    if (a % 2 == 0 && b % 2 == 0)
    {
        printf("%d and %d are Even numbers", a, b);
    }
    else if (a % 2 == 0 && b % 2 != 0)
    {
        printf("%d is Even and %d is Odd", a, b);
    }
    else if (a % 2 != 0 && b % 2 == 0)
    {
        printf("%d is Odd and %d is Even", a, b);
    }
    else
    {
        printf("%d and %d are Odd numbers", a, b);
    }

    return 0;
}

/*

                                                    Author-:Jay Gorfad
                                                    Doc-:15-12 Oct 2025
                                                    Objective-:To learn the Console Alphabet Animation Program
L-4
*/
#include<stdio.h>
#include<conio.h>
int main()
{

    char ch='A';
    int i,j;

    for(j=1; j<=4; j++)
    {
        for(i=0; i<25; i++)
        {
            sound(i*10);
            delay(20);
            nosound();
            textcolor(i);
            gotoxy(j,i+1);
            cprintf("%c",ch+1);
        }// end of inner for
    }// end of outer for
    getch();
}// end of main
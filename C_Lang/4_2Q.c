/*

                                                    Author-:Jay Gorfad
                                                    Doc-:15-12 Oct 2025
                                                    Objective-:To learn the Console Alphabet Animation Program
L-4

Entry Controlled Loop
---------------------
        Sentinel
        Counter Controlled

        for(i=0, j =0; i<34 && j<23; i++ j++)
        
            i=12;
        while(i<34)
        {
            i++;
        }
________________________________________________________________________________________________________________________________________________

Exit Controlled Loop
---------------------
        Sentinel
        Counter Controlled

        i=23;
        do
        {
            i++;        
        }while(i<23);

*/
//Console Alphabet Animation Program

#include<stdio.h>
#include<conio.h>
// -> #include<DOS.h>  what is header file shearch
int main()
{
  
    char ch='A';
    int i;

    for(i=0; i<25; i++)
    {
   // ->     textbackground(CYAN); 
        textcolor(i);
        gotoxy(5,i+1);
        sound(200);
        delay(200);
        nosound();
        cprintf("%c",ch+i);
    }

    getch();
}

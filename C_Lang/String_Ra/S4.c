/*         L-1    29-12-25 Third_Lacture                           */ 
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
     

    printf("\nEnter Name : ");
    scanf("%[^\n]s",&name);  // scanf multipal word in pachs valid in "%[^\n]s",




   // gets(name);  // Get String
   // scanf("%s", name);          //scanf is a do not multipal scaning Pache

    printf("\nName : %s",name);

   // puts(name);

    
    return 0;

}
// scnaf is not multipal pesch word allow 
/*
                                                                 Author    : Jay Gorfad
                                                                 Date      : 24-12 Oct 2025
                                                                 Objective : To Revers concate  length
                                                                 Lecture   : 6 
                                                                 Teching Dhiraj Sir
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    char str3[30];
    int len1=0,len2=0; 
    int i;
    int j=0;
    int flag=0;

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

    for(i=len1-1; i>=0; i--){       // 01234     01234
        str3[j]=str1[i];            // ROYAL     LAYOR
        j++;
    }
    str3[j]='\0';

    printf("\nThe revers of %s is %s",str1,str3);
    
    j=0;

    for(i=len1; i<len1+len2; i++){
        str1[i] = str2[j];
        j++;  
    }
    
    str1[i]='\0';

    printf("\nThe concated string is %s",str1);

    if(len1!=len2){
        printf("\n%s and %s are Not equal",str1,str2);
    }else{
        for(i=0; i<len1 && j<len2;i++,j++){
            if(str1[i]==str2[j]){
                flag=-1;
                break;
            }else{
                continue;
            } //end of else
        }//end of for
    }//end of outer else
    if(flag==-1){
        printf("\n%s and %s are Not equal",str1,str2);
    }else{
        printf("\n%s and %s are equal",str1,str2);
    }
    return 0;
}
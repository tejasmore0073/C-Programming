#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any thing= ");
    scanf("%c",&ch);
    if(ch >= 65 && ch <= 90)
    printf("Capital letter\nASCII Value of letter=%d",ch);
    else if(ch >= 97 && ch <= 122)
    printf("Small leteer=%d",ch);
    else if(ch >= 48 && ch <= 57)
    printf("Digits=%d",ch);
    else 
     printf("Special symbol=%d",ch);
}
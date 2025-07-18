#include<stdio.h>
int main()
{
    char ch;

    printf("Capital Letter\n");
    for(ch='A';ch<='Z';ch++)
    {
     printf("%d ",ch);   
    }
    printf("\nSmall Letter\n");
    
    for(ch = 'a'; ch <= 'z' ; ch++)
    {
        printf("%d ",ch);
    }
    printf("\nDigit \n");
    for(ch='0';ch<='9';ch++)
    {
        printf("%d ",ch);
    }
}
#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter Choice=");
    scanf("%d",&ch);
    if(ch>=4)
    {
        printf("Invalid");
        return 0;
    }
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1: printf("Addition=%d",(a+b));
                break;
        case 2: printf("Substraction=%d",(a-b));
                break;
        case 3: printf("Multiplication=%d",(a*b));
                break;
        case 4: printf("Division=%d",(a/b));
                break;
        default :printf("Invalid choice");
    }

    return 0;
}
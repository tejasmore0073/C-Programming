#include<stdio.h>
int main()
{
    int n,r,temp=0,sum=0;
    printf("Enter Number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    
    }
    if(sum==temp)
    printf("No is Armstrong");
    else
    printf("Not Armstrong");

    return 0;
}
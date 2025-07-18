#include<stdio.h>
int main()
{
    int pid1,pid2,pid3;
    char name1[100],name2[100],name3[100];
    int price1,price2,price3,qty1,qty2,qty3;
    float total_price,discount_percentage,discount_amount,pay_amount;

    printf("\nEnter Product Details");
    printf("\nEnter ID 1:");
    scanf("%d",&pid1);
    printf("\nEnter Name 1:");
    scanf("%s",&name1);
    printf("\nEnter Price 1:");
    scanf("%d",&price1);
    printf("\nEnter Quantity 1:");
    scanf("%d",&qty1);

    printf("\nEnter ID 2:");
    scanf("%d",&pid2);
    printf("\nEnter Name 2:");
    scanf("%s",&name2);
    printf("\nEnter Price 2:");
    scanf("%d",&price2);
    printf("\nEnter Quantity 2:");
    scanf("%d",&qty2);

    printf("\nEnter ID 3:");
    scanf("%d",&pid3);
    printf("\nEnter Name 3:");
    scanf("%s",&name3);
    printf("\nEnter Price 3:");
    scanf("%d",&price3);
    printf("\nEnter Quantity 3:");
    scanf("%d",&qty3);

    total_price=(price1*qty1)+(price2*qty2)+(price3*qty3);
    if(total_price >= 100000)
    discount_percentage=10;
    else if(total_price >= 80000)
    discount_percentage=8;
    else if(total_price >= 50000)
    discount_percentage=5;
    else if(total_price >= 30000)
    discount_percentage=2;

    discount_amount=(total_price*discount_percentage)/100;
    pay_amount=total_price-discount_amount;
    printf("\n..................................Product Details.......................");
    printf("\n|     Id    |     Name    |    Price    |    Quantity    |    Total    |");
    printf("\n........................................................................");
    printf("\n|%10d|%14s|%13d|%16d|%13d",pid1,name1,price1,qty1,(price1 * qty1));
    printf("\n|%10d|%14s|%13d|%16d|%13d",pid2,name2,price2,qty2,(price2 * qty2));
    printf("\n|%10d|%14s|%13d|%16d|%13d",pid3,name3,price3,qty3,(price3 * qty3));
    printf("\n........................................................................");
    printf("\n\t\t\t\tTotal Price           :%.2f",total_price);
    printf("\n\t\t\t\tDiscount Percentage   :%.2f",discount_percentage);
    printf("\n\t\t\t\tDiscount Amount       :%.2f",discount_amount);
    printf("\n\t\t\t\tPay Amount            :%.2f",pay_amount);
}
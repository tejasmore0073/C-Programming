#include<stdio.h>
int main()
{
    float id,price1,price2,price3,qty1,qty2,qty3,total_price,discount_percentage,discount_amount,pay_amount;
    char name[10];

    printf("\nEnter product id=");
    scanf("%f",&id);
    printf("\nEnter product name=");
    scanf("%s",&name);
    printf("\nEnter product price1=");
    scanf("%f",&price1);
    printf("\nEnter product price2=");
    scanf("%f",&price2);
    printf("\nEnter product price3=");
    scanf("%f",&price3);
    printf("\nEnter product quantity1=");
    scanf("%f",&qty1);
    printf("\nEnter product quantity2=");
    scanf("%f",&qty2);
    printf("\nEnter product quantity3=");
    scanf("%f",&qty3);

    total_price=(price1 * qty1) + (price2 * qty2) + (price3 * qty3);
    if(total_price >= 100000)
    discount_percentage=10;
    else if(total_price >= 80000)
    discount_percentage=8;
    else if(total_price >= 50000)
    discount_percentage=5;
    else if(total_price >= 30000)
    discount_percentage=2;
    else
    discount_percentage=0;

    discount_amount=(total_price * discount_percentage)/100;
    pay_amount = total_price - discount_amount;
    printf(".............................................Product Details......................................");
    printf("\nProduct id                                 :%.2f",id);
    printf("\nProduct Name                               :%s",name);
    printf("\nTotal price                                :%.2f",total_price);
    printf("\nDiscount Amount                            :%.2f",discount_amount);
    printf("\nDiscount Percentage                        :%.2f",discount_percentage);
    printf("\nPay Amount                                 :%.2f",pay_amount);
 

    return 0;
}
#include<stdio.h>
int main()
{
    int code,quantity;
    float price;
    scanf("%d %d",&code,&quantity);

    if(code ==1)
    {
        price = quantity*4.00;
        printf("Total: R$ %.2f\n",price);
    }

    if(code ==2)
    {
        price = quantity*4.50;
        printf("Total: R$ %.2f\n",price);
    }

    if(code ==3)
    {
        price = quantity*5.00;
        printf("Total: R$ %.2f\n",price);
    }

    if(code ==4)
    {
        price = quantity*2.00;
        printf("Total: R$ %.2f\n",price);
    }

   if(code ==5)
    {
        price = quantity*1.50;
        printf("Total: R$ %.2f\n",price);
    }

    return 0;
}
#include<stdio.h>
int main()
{

    float income,tax;
    scanf("%f",&income);

    if(income>2000 && income<=3000)
    {
        tax =((income-2000)*8)/100;
        printf("R$ %.2f\n",tax);
    }
    else if ( income>3000 && income<=4500)
    {
    
        tax = (((income-3000)*18)/100)+80;
        printf("R$ %.2f\n",tax);
    }
    else if(income>4500)
    {
        tax = (((income-4500)*28)/100)+350;
        printf("R$ %.2f\n",tax);
    }
    else
    {
        printf("Isento\n");
    }
    

    
    return 0;
}
#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
    {
        float pera = a+b+c;
        printf("Perimetro = %.1f\n",pera);

    }
    else
    {
        float area = 0.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }


    return 0;
}
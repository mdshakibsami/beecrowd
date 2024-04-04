#include<stdio.h>
int main()
{
    int i,x,mul;

    scanf("%d",&x);

    for(i=1;i<=10;i++)
    {
        mul = i*x;
        printf("%d x %d = %d\n",i,x,mul);
    }


    return 0;
}
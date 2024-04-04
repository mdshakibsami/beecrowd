#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", num);

    if (num >= 100)
    {
        int hundrad = num / 100;
        num %= 100;
        printf("%d nota(s) de R$ 100,00\n", hundrad);
    }
    else
    {
        printf("0 nota(s) de R$ 100,00\n");
    }

    if (num >= 50)
    {
        int fifty = num / 50;
        num %= 50;
        printf("%d nota(s) de R$ 50,00\n", fifty);
    }
    else
    {
        printf("0 nota(s) de R$ 50,00\n");
    }

    if (num >= 20)
    {
        int twinty = num / 20;
        num %= 20;
        printf("%d nota(s) de R$ 20,00\n", twinty);
    }
    else
    {
        printf("0 nota(s) de R$ 20,00\n");
    }

    if (num >= 10)
    {
        int twinty = num / 10;
        num %= 10;
        printf("%d nota(s) de R$ 10,00\n", twinty);
    }
    else
    {
        printf("0 nota(s) de R$ 10,00\n");
    }

    if (num >= 5)
    {
        int five = num / 5;
        num %= 5;
        printf("%d nota(s) de R$ 5,00\n", five);
    }
    else
    {
        printf("0 nota(s) de R$ 5,00\n");
    }

    if (num >= 2)
    {
        int two = num / 2;
        num %= 2;
        printf("%d nota(s) de R$ 2,00\n", two);
    }
    else
    {
        printf("0 nota(s) de R$ 2,00\n");
    }

    if (num == 1)
    {
        printf("%d nota(s) de R$ 1,00\n", num);
    }
    else
    {
        printf("0 nota(s) de R$ 1,00\n");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int testCase,rabbit=0,rat=0,frog=0,num, totalAnimal;
    char symbol;
    float rabbitP,ratP,frogP;

    scanf("%d",&testCase);

    while (testCase--)
    {
        scanf("%d %c",&num,&symbol);
        if(symbol == 'C' || symbol == 'c')
        {
            rabbit +=num;
        }
        else if (symbol == 'R' || symbol == 'r')
        {
            rat += num;
        }
        else if(symbol == 'S' || symbol == 's')
        {
            frog += num;

        }
       
    }

    totalAnimal = rabbit+rat+frog;
    rabbitP = (rabbit*100.00)/totalAnimal;
    ratP = (rat*100.00)/totalAnimal;
    frogP = (frog*100.00)/totalAnimal;

    printf("TTotal: %d cobaias\n",totalAnimal);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2f %\n",rabbitP);
    printf("Percentual de ratos: %.2f %\n",ratP);
    printf("PPercentual de sapos: %.2f %\n",frogP);

    

    return 0;
}
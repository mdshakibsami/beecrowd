#include<stdio.h>
int main()
{
    int testCase,num;
    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%d",&num);
        if(num>=0)
        {
            if(num==0) printf("NULL\n");
            else if(num%2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else
        {
            if(num%2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}
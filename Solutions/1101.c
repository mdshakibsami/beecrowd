#include<stdio.h>
int main()
{

    int m,n,max,min;
    scanf("%d %d",&m,&n);
 

    while(m>0 && n>0 )
    {
        
        int sum =0;
        if(m>n)
        {
            max = m;
            min = n;
        }
        else
        {
            max = n;
            min = m;
        }

        for(int i = min;i<=max;i++)
        {
            printf("%d ",i);
            sum +=i;
        }
        printf("Sum=%d\n",sum);
        scanf("%d %d",&m,&n);
    }

    return 0;
}
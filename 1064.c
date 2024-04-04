#include<stdio.h>
int main()
{
    float num[5],sum =0,avg;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f",&num[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if(num[i]>0)
        {
            sum+=num[i];
            count++;
        }
    }
    
    avg = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);



    return 0;
}
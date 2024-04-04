#include<stdio.h>
int main()
{

    float arr[5];
    int i, count =0;

    for( i = 0; i < 6; i++ )
    {
        scanf("%f",&arr[i]);
    }

    for( i = 0; i < 6 ; i++)
    {
        if(arr[i]>0)
        {

            count++;
        }
       
    }

    printf("%d valores positivos\n",count);

    return 0;
}
#include<stdio.h>
int main()
{
    int i,num[100],max =0,position;
    for( i=1;i<=100;i++)
    {
        scanf("%d",&num[i]);
    }
    
    for(i=1;i<=100;i++)
    {
        if(max<num[i])
        {
            max = num[i];
            position = i;
        }
    


    }
    printf("%d\n",max);
    printf("%d\n",position);

    return 0;
}
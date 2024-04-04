#include<stdio.h>
int main()
{
    int n,x,y;
    float result;

    scanf("%d",&n);
    while (n--)     
    {
        scanf("%d %d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
        result = (float) x/y;
        printf("%.1f\n",result);
        }
            


    }
    

    return 0;
}
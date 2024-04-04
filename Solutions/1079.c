#include<stdio.h>
int main()
{

    int testCase;
    float a,b,c,avg;
    scanf("%d",&testCase);

    while(testCase--)
    {

        scanf("%f %f %f",&a,&b,&c);
        avg = (a*2+b*3+c*5)/10;
        printf("%.1f\n",avg);
        
    }
    
    return 0;
}
#include <stdio.h>
#include<math.h>
int main()
{
    int start, end,hours = 0;
    scanf("%d %d", &start, &end);

    if(start>=end)
    {
        hours =(24-start)+end;
       
    }
    else{
        hours = end -start; 
    }

     printf("O JOGO DUROU %d HORA(S)\n",hours);
    return 0;
}
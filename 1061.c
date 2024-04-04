#include<stdio.h>
int main()
{

    int sDay,sHour,sMinute,sSecond,eDay,eHour,eMinute,eSecond;

    printf("Enter starting Day hour minute second\n");
    scanf("%d %d %d %d",&sDay,&sHour,&sMinute,&sSecond);

    printf("Enter ending Day hour minute second\n");
    scanf("%d %d %d  %d",&eDay,&eHour,&eMinute,&eSecond);


    int day,hour,minute,second;

    day = eDay - sDay;
    hour = eHour - sHour;
    minute = eMinute - sMinute;
    second = eSecond - sSecond;

    if(eHour<0)
    {
        hour +=24;
        day--;
    }


   if(eMinute<0)
    {
        minute +=60;
        hour--;

    }


    if(eSecond<0)
    {
        second +=60;
        minute--;

    }


    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hour);
    printf("%d minuto(s)\n",minute);
    printf("%d segundo(s)\n",second);


    return 0;
}
#include <stdio.h>
int main()
{
    int hour, distance;
    scanf("%d %d", &hour, &distance);
    // float liters = (float)(hour*distance)/12;
    //  without type castig
    float liters = (hour * distance) / 12.0;
    printf("%.3f\n", liters);

    return 0;
}
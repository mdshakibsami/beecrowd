#include <stdio.h>
int main()
{
    int distace;
    float spentFuel, average;
    scanf("%d %f", &distace, &spentFuel);
    average = distace / spentFuel;
    printf("%.3f km/l\n", average);

    return 0;
}
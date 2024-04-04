#include <stdio.h>
int main()
{
    int a, b, c, d;
    float e, f, cost;
    scanf("%d %d %f", &a, &b, &e);
    scanf("%d %d %f", &c, &d, &f);
    cost = b * e + d * f;
    printf("%f", cost);

    return 0;
}
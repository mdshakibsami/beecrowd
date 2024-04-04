#include <stdio.h>
#include <math.h>
int main()
{

    double a, b, c, diterminer, BF1, BF2;
    scanf("%lf %lf %lf", &a, &b, &c);
    diterminer = (b * b) - 4 * a * c;
    if (diterminer >= 0 && 2 * a != 0)
    {
        BF1 = (-b + sqrt(diterminer)) / (2 * a);
        BF2 = (-b - sqrt(diterminer)) / (2 * a);
        printf("R1 = %.5lf\n", BF1);
        printf("R2 = %.5lf\n", BF2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
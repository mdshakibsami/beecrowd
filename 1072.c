#include <stdio.h>
int main()
{
    int n, x, in = 0, out = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }

        n--;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
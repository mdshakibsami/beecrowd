#include <stdio.h>
int main()
{
    int n, x, y, i, min, max;
    scanf("%d", &n);

    while (n--)
    {
        int sum = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            min = y;
            max = x;
        }
        else
        {
            min = x;
            max = y;
        }

        for (i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }
}
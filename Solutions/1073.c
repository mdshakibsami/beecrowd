#include <stdio.h>
#include<math.h>
int main()
{
    int i , n, mul;

  scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            mul = pow(i,2);
            printf("%d^%d = %d\n", i, 2, mul);
        }
    }

    return 0;
}
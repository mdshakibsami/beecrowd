#include <stdio.h>
int main()
{
    int i, j;
    float mI, mJ;

    for (i = 0; i <= 20; i += 2)
    {
        for (j = 1;; j++)
        {

            if (i == 0 || i == 10 || i == 20)
            {
                int mI = i / 10;
                int mJ = j + mI;
                printf("I=%d J=%d\n", mI, mJ);

                if (j == 3)
                    break;
            }
            else
            {
                float mI = i / 10.0;
                float mJ = j + mI;
                printf("I=%.1f J=%.1f\n", mI, mJ);

                if (j == 3)
                    break;
            }
        }
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int i, j, step = 1, increase = 0, start = 7,loop;
    for (i = 1; i < 10; i += 2)
    {
        int count = 0;
        if (step == 1)
        {
            for (j = start;; j--)
            {
                printf("I=%d J=%d\n", i, j);
                count++;
                step =0;
                if (count == 3)
                    break;
            }
        }
        else
        {
            for (j = start+2;; j--)
            {
                printf("I=%d J=%d\n", i, j);
                count++;
                step =1;
                loop =1;
                if (count == 3)
                    break;
            }

        }

        if(loop)
        {
            start+=4;
            loop=0;
        }
    }
}
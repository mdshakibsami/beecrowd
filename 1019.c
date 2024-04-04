#include <stdio.h>
int main()
{
    int n;
    // taking inpute in secound
    scanf("%d", &n);
    int hours, minutes;
    hours = n / 3600;
    n = n - hours * 3600;
    minutes = n / 60;
    n = n - minutes * 60;
    printf("%d:%d:%d\n", hours, minutes, n);
    return 0;
}
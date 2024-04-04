#include <stdio.h>
int main()
{
  int n, years, months;
  // taking inputs in days
  scanf("%d", &n);

  years = n / 365;
  n = n - years * 365;
  months = n / 30;
  n = n - months * 30;
  printf("%d ano(s)\n", years);
  printf("%d mes(es)\n", months);
  printf("%d dia(s)\n", n);
  return 0;
}
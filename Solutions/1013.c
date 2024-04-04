#include <stdio.h>
#include <math.h>
int main()
{
  int num1, num2, num3, major, majorAB;
  scanf("%d %d %d", &num1, &num2, &num3);
  // formula of finding whice one is greatest between two numbers
  majorAB = (num1 + num2 + abs(num1 - num2)) / 2;
  major = (majorAB + num3 + abs(majorAB - num3)) / 2;
  printf("%d eh o maior\n", major);
  return 0;
}
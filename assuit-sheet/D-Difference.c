#include <stdio.h>
/*
* main - read code 
* Return: Always 0
*/
int main(void)
{
  long long a, b, c, d, result;
  scanf("%lld", &a);
  scanf("%lld", &b);
  scanf("%lld", &c);
  scanf("%lld", &d);

  result = (a * b ) - (c * d);
  printf("Difference = %lld", result);
  return (0);
}
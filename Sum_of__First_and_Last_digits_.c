#include<stdio.h>
int main() 
{
  int number, first, last, sum;
  scanf("%d", &number);
  last = number % 10;
  first = number;
  while (first >= 10)
  {
    first = first / 10;
  }
  sum = first + last;
  printf("%d
", sum);
  return 0;
}



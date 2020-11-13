#include<stdio.h>

int sum_of_3_5_multiples(int number) {
    int sum = 0;
    for(int i = 0; i < number; i++)
      if( (i % 3) == 0 || (i % 5) == 0)
        sum += i;
    return sum;
}

int main(void)
{
  printf("%d\n", sum_of_3_5_multiples(1000));

  return 0;
}

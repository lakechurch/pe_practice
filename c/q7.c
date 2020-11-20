/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 */
#include <stdio.h>

long get_prime(int count);
int is_prime(long num);

long get_prime(int count)
{
  long prime=1;
  for (int d = 1; d < count; d++)
  {
    long test=prime+1;
    int flag=0;
    while (flag == 0)
    {
      if (is_prime(test) == 1)
      {
        flag = 1;
      }
      else
      {
        test += 1;
      }
      prime = test;
      continue;
    }

  }
  return prime;
}

int is_prime(long num)
{
     if (num <= 1) 
       return 0;
     if ((num % 2 == 0 || num % 3 == 0) && num > 2) 
       return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int main(void)
{
  int n;
  printf("Input index of prime: ");
  scanf("%d", &n);
  printf("%ld\n", get_prime(n));
  return 0;
}


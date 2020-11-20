/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 */
#include <stdio.h>

long get_prime(int index)
{
  long prime;

  for ()

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
  int n=6;

  get_prime(n);

  return 0;
}

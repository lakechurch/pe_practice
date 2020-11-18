/*
 * Problem 5: Smallest Multiple
 *
 * 2520 is the smallest number that can be divided by each of the numbers from
 * 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 */
#include <stdio.h>

int main(void) {
  //skip non-primes as primes are factors of non-primes
  unsigned long min = (long)1*2*3*5*7*11*13*17*19*20;
  unsigned long max = (long)1*2*3*4*5*6*7*8*9*10*11*12*13*14*15*16*17*18*19*20;
  int count = 20;

  for (unsigned long i = min; i < max; i+=20) {
    for (int a = 20; a > 0; a--) {
      if (i % a != 0) {
        count = 20;
        break;
      }
      else {
        count--;
      }
    }
    if (count == 0) {
      printf("%ld\n", i);
      break;
    }
  }
}


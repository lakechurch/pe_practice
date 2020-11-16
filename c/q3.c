/*
 * Problem 3: Largest prime factor
 *
 * The prime factors of 13195 are 5, 7, 13, and 29.
 * What is the largest prime factor of the number 600851475143?
 */

/* build with linked math lib: 
 * $ gcc -Wall q3.c -o s3 -lm */
#include<stdio.h>
#include<math.h>

int is_prime(unsigned long n) {
    
    for (unsigned long i= n/2; i > 1; i--) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}


int main(void) {
  unsigned long n = 600851475143;
  // unsigned long n = 13195;
  unsigned long max_factor = (long) sqrt((double)n);

  printf("Sqrt is max factor: %ld\n", max_factor);

  /* Scan decrementing: is_factor && is_prime */
  for (unsigned long q=max_factor; q > 1; q--) {
      if (n % q == 0 && is_prime(q) == 1) {
          printf("Largest prime: %ld\n", q);
          break;
      }
  }

  return 0;
}

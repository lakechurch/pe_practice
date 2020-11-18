/* 
 * Problem 4: Largest palindrome product
 *
 * A palindromic number reads the same both ways. The largest palindrome made 
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers
 */

/*
 * Build: gcc -Wall q4.c -o s4
 */
#include<stdio.h>

int count_digits(long n);
int is_pallindrome(long n);

int main(void) {
    long tmp_result = 0, max_result = 0;
    int max=1000;

    for (int a = max; a > 0; a--) {
        for (int b = a; b < max; b++) {
            tmp_result = a * b;
            if (is_pallindrome(tmp_result) == 1) {
                if (tmp_result > max_result) {
                  printf("%d %d %ld\n", a, b, tmp_result);
                  max_result = tmp_result;
                }
            }
        }
    }
    printf("%ld\n", max_result);

    return 0;
}

int count_digits(long n) {
    int count = 0;

    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }

    return count;
}

int is_pallindrome(long n) {
    long tmp, r = 0;
    tmp = n;

    while (n != 0)
    {
        r = r * 10;
        r = r + n%10;
        n = n/10;
    }
    //printf("%ld %ld\n\n", tmp, r);

    return r == tmp;
}

# 2520 is the smallest number that can be divided by each of the numbers from
# 1 to 10 without any remainder.
#
# What is the smallest positive number that is evenly divisible by all of the
# numbers from 1 to 20?
import math


def smallest_mult(count, value):
    for i in range(1, count):
        if not value % i == 0:
            return False
    return True


def is_prime(value):
    for i in range(2, int(math.sqrt(value)) + 1):
        if value % i == 0:
            return False
    return True


def prime_list(n):
    prime_vals = []
    for i in range(1, n):
        if is_prime(i):
            prime_vals.append(i)
    return prime_vals


count = 20
print(prime_list(count))
q = 1
for i in prime_list(count):
    q *= i
print q
count = q
while not smallest_mult(20, count):
    count += q
print count

# print smallest_mult(10, 2520)

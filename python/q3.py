# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?
import math

num = 600851475143

def is_prime(value):
    for i in range(2, int(math.sqrt(value))):
        if value % i == 0:
            return False
    return True

for i in range(1, int(math.sqrt(num))):
    if num % i == 0:
        if is_prime(i):
            finale = i

print finale

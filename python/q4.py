# A palindromic number reads the same both ways. The largest palindrome made
# from the product of two 2-digit numbers is 9009 = 91 x 99.
#
# Find the largest palindrome made from the product of two 3-digit numbers.


def is_pallindromic_number(value):
    a = str(value)
    b = len(a)/2
    # print a[0:b]
    # print a[:b:-1]
    if (len(a) % 2 == 0 and a[0:b] == a[:b-1:-1]) or (a[0:b] == a[:b:-1]):
        return True
    return False


if __name__ == '__main__':
    # for i in range(200):
    #     if is_pallindromic_number(i):
    #         print i
    finale = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            mult = i * j
            if is_pallindromic_number(mult):
                if mult > finale:
                    print mult
                    finale = mult
    print finale

# A unit fraction contains 1 in the numerator. The decimal representation of
# the unit fractions with denominators 2 to 10 are given:
#
# 1/2	= 	0.5
# 1/3	= 	0.(3)
# 1/4	= 	0.25
# 1/5	= 	0.2
# 1/6	= 	0.1(6)
# 1/7	= 	0.(142857)
# 1/8	= 	0.125
# 1/9	= 	0.(1)
# 1/10	= 	0.1
# Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be
# seen that 1/7 has a 6-digit recurring cycle.
#
# Find the value of d < 1000 for which 1/d contains the longest recurring cycle
# in its decimal fraction part.
import decimal
import re

rpt_len = 0


def repetitions(s):
    r = re.compile(r"(.+?)\1+")
    for match in r.finditer(s):
        yield (match.group(1), len(match.group(0))/len(match.group(1)))


def cyclical_denominator(n):
    global rpt_len
    prec = 5000
    rpt_str = 0
    decimal.getcontext().prec = prec
    d = decimal.Decimal(1) / decimal.Decimal(n)
    dec_str = str(d)[2:].strip("0")
    # if n % 100 == 0:
    #     print dec_str
    if prec == len(dec_str):
        j = list(repetitions(dec_str))
        # print j
        if j and rpt_len < len(j[0][0]):
            rpt_len = len(j[0][0])
            rpt_str = j[0][0]
            print n, rpt_len, rpt_str


if __name__ == '__main__':
    for i in range(2, 1000):
        cyclical_denominator(i)

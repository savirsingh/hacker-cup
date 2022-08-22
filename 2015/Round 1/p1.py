# i keep exceeding the time limit :/
# c++ solution is better but still not perfect.

import itertools
def prime_factors(n):
    i = 2
    factors = set()
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.add(i)
    if n > 1:
        factors.add(n)
    return len(factors)

t = int(input())
case1 = 1

for s in itertools.repeat(None, t):
    in0 = list(map(int, input().split(" ")))
    a = in0[0]
    b = in0[1]
    k = in0[2]
    list2 = [*range(a, b+1, 1)]
    in1 = list(map(prime_factors, list2))
    print("Case #" + str(case1) + ": " + str(in1.count(k)))
    case1 += 1

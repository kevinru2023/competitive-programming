from math import lcm, gcd
from functools import reduce


def my_lcm(x: int, y: int) -> int:
    return abs(x * y) // gcd(x, y)


def my_lcm_multiple(*args: int) -> int:
    return reduce(my_lcm, args)


if __name__ == "__main__":
    res = lcm(*range(1, 20))
    print(res)

    my_res = my_lcm_multiple(*range(1, 20))
    print(my_res)

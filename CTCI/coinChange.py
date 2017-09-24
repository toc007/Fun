#!/bin/python
import sys
import numpy as np

def make_change(coins, n):
    if n < 0:
        return 0
    if n == 0:
        return 1

    mkChange = [0] * (n+1)
    mkChange[0] = 1
    print mkChange

    return 100

def make_change_rec(coins, n, comb):
    if n == 0:
        print comb
        return 1
    elif n < 0:
        return 0
    res = 0
    for i in coins:
        res += make_change_rec(coins, n-i, comb+' '+str(i))
    return res



n,m = raw_input().strip().split(' ')
n,m = [int(n),int(m)]
coins = map(int,raw_input().strip().split(' '))
print make_change_rec(coins, n, '')


#!/usr/bin/python

def PoT(n):
    if n == 0:
        return 1
    if n == 1:
        return 2
    p = PoT(n/2)
    p = p*p
    if n%2 == 1:
        p = p+p
    return p

def binToDec(s):
    if len(s) == 1:
        if s is '1':
            return 1
        else:
            return 0

    mid = len(s)/2
    return binToDec(s[:mid])*2**(mid) + binToDec(s[mid:])

uin = raw_input("Enter binary string to convert to decimal: ")
print binToDec(uin)

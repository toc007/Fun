#!/usr/bin/python

def fact(n):
    if n <= 0:
        return 1;
    return fact(n-1)*n
i = input("Enter number to factorial: ")
print(fact(i))

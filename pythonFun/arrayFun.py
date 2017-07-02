#!/usr/bin/python

x = [1 for i in range(0,5)]
print x

for i in range(0, len(x)):
    x[i] = x[i]+1
print x

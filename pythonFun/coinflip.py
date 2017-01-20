#!/usr/bin/python3

import random, readline

random.seed()

while True:
    x = random.randint(0,1)
    if x == 1:
        print "Heads"
    else:
        print "Tails"

    uin = raw_input("Continue? (y): ")
    print uin
    if uin != "y" or uin != "Y":
        break

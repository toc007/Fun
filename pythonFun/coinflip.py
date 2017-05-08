#!/usr/bin/python

import random

random.seed()


done = False
while not done:
    x = random.randint(0,1)
    print "heads" if x==1 else "tails"
    done = raw_input("You done bruh? (y/n): ").lower() == "y"

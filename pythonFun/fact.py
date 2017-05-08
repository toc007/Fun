#!/usr/bin/python

def factorial(relax):
    if relax <= 0:
        return 1
    return relax * factorial(relax-1)

done = False 
while not done:
    r = input("Enter le number: ")
    print factorial(r)
    done = raw_input("Le done?(y/n): ") is "y"
print raw_input("suck my dick?")

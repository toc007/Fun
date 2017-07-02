#!/usr/bin/python

def createMatrix(r, c):
    bar = [False for item in range(0,c)]
    foo = [bar for item in range(0,r)]
    return foo

def printMatrix(foo):
    print " ",
    for index in range(len(foo[0])):
        print "%5d" % index,
    print
    i = 0
    for item in foo:
        print i,
        i += 1
        for item2 in item:
            print "%5s" % item2,
        print 

x = createMatrix(6,4)
print x

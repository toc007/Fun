#!/usr/bin/python

memAddress = [36, -96]

for add in memAddress:
    addStr = "{0:08b}".format(add)
    #print "\"" + addStr[:11] + "\",\"" + addStr[11:13] + "\",\"" + addStr[13:] + "\""
    print "\"" + addStr + "\"" 
    #print add >> 5, (add&24) >> 3

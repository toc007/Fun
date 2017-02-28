#!/usr/bin/python2

import urllib2
from bs4 import BeautifulSoup

url = urllib2.urlopen("http://ucsd.edu/catalog/courses/CSE.html")

fio = url.read()

soup = BeautifulSoup(fio, "html.parser")

courses = soup.select('.course-name')

for val in courses:
    string = val.string
    courseName = string.split(".")
    print courseName[0]

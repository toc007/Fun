#!/usr/bin/python2

import urllib2, re, cookielib
from bs4 import BeautifulSoup

f = open('courses.txt', 'w')

# open course catalogue and
response = urllib2.urlopen("http://ucsd.edu/catalog/front/courses.html")
html = response.read()

# parent url for all courses
par = "http://ucsd.edu/catalog/"
# create the soup using html.parser
soup = BeautifulSoup(html, "html.parser")

# get all 
courses = soup.select('span.courseFacLink a')

for var in courses:
    if var.string == 'courses':
        child = par + var['href'].split("/", 1) [1]
        curl = urllib2.urlopen(child)
        chtml = curl.read()
        csoup = BeautifulSoup(chtml, "html.parser")
        ccourses = csoup.select('.course-name')
        for val in ccourses:
            print val
            string = val.string
            if string is not None:
                courseName = string.split(".")
                res = '\"' + courseName[0] + '\",\n'
                f.write((res).encode('utf-8'))

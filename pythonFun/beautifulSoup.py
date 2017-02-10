#!/usr/bin/python

from bs4 import BeautifulSoup

soup = BeautifulSoup(open("./cseCourse.html", 'r'))

soup.select('#course-name')


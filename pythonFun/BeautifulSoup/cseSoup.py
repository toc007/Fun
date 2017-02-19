#!/usr/bin/python2

import webbrowser
import re
from bs4 import BeautifulSoup

fio = open("../data/cseCourse.html")

soup = BeautifulSoup(fio, "html.parser")

courses = soup.select('.course-name')

for val in courses:
    string = val.string
    courseName = string.split(".")
    couseName = string.split(r"\w")
    print courseName[0]

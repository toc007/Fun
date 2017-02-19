
#!/usr/bin/python2

import webbrowser
from bs4 import BeautifulSoup

fio = open("./ucsdCourses.txt")

soup = BeautifulSoup(fio, "html.parser")

courses = soup

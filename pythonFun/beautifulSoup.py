#!/usr/bin/python

from bs4 import BeautifulSoup

soup = BeautifulSoup(open("./porn.html"))

print(soup.prettify())



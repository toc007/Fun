import scrapy


class QuotesSpider(scrapy.Spider):
    name = "quotes"

    urls = [
        'http://ucsd.edu/catalog/front/courses.html',
    ]

    def parse(self, response):
        page = response.url.split("/")[-2]
        filename = 'quotes-%s.html' % page
        with open(filename, 'wb') as f:
            f.write(response.body)
        self.log('Saved file %s' % filename)

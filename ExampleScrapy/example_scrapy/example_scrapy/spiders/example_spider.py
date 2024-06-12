import scrapy

from ExampleScrapy.example_scrapy.example_scrapy.items import ExampleItem

class ExampleSpider(scrapy.Spider):
    name = 'example'
    start_urls = ['http://www.baidu.com/']

    def parse(self, response):
        item = ExampleItem()
        # 提取数据并存入item
        item['name'] = "百度一下 你就知道"
        yield item
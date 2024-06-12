from scrapy.crawler import CrawlerProcess
from scrapy.utils.project import get_project_settings
from example_scrapy.spiders.example_spider import ExampleSpider

def main():
    process = CrawlerProcess(get_project_settings())
    process.crawl(ExampleSpider)
    process.start()

if __name__ == "__main__":
    main()
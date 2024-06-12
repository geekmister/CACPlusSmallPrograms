# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://docs.scrapy.org/en/latest/topics/item-pipeline.html


# useful for handling different item types with a single interface
from itemadapter import ItemAdapter


class ExampleScrapyPipeline:
    
    def open_spider(self, spider):
        print("爬虫开始了")

    def process_item(self, item, spider):
        print(item["name"]+1111111111111111111111111)
        return item

    def close_spider(self, spider):
        print("爬虫结束了")
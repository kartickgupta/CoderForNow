from selenium import webdriver

PATH = '/home/kartick/Kartick/Project/python/Web Scrapping/chromedriver'
driver = webdriver.Chrome(PATH)

driver.get("https://www.amazon.in")
print(driver.title)
driver.quit()


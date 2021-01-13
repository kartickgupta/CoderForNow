import bs4 as bs
import urllib.request
import pandas as  pd
sauce = urllib.request.urlopen('https://pythonprogramming.net/parsememcparseface/')

soup = bs.BeautifulSoup(sauce, 'lxml')
# print(soup) - Prints the HTML File
# print(type(soup.title)) Prints contents along with tags
# print(soup.title.name) Prints the name  of the tag 
# print(soup.title.string) 
# print(soup.title.text)
# print('-------------------------------------')
# print(soup.p.text)
# print(soup.findAll('p')) # Finds all occurances of the specifed text 
# print('-----------------------------------')
# for i in soup.findAll('p'):
#     print(i.text)

# print(soup.getText()) 

# for url in soup.findAll('a'):
#     # print(url.text)
#     # print(url)
#     print(url.get('href')) 
print('----------------------------------------------------------------------')
# For Finding all urls in navigation bar

# nav = soup.nav
# for url in nav.findAll('a'):
#     print(url.get('href'))

# for div in soup.findAll('div', class_ = 'body'):
    # print(div.text)

table = soup.table
table = soup.find('table')
# print(table)
trs = table.findAll('tr')
for tr in trs:
    td = tr.findAll('td')
    row = [i.text for i in td]
    print(row)

dfs = pd.read_html('https://en.wikipedia.org/wiki/List_of_countries_by_number_of_military_and_paramilitary_personnel')
for df in dfs:
    print(df)
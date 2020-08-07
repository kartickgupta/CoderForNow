import logging

logging.basicConfig(filename= 'test.log', level=logging.DEBUG)


for i in range(20):
    for j in range(i):
        logging.debug(i+j)

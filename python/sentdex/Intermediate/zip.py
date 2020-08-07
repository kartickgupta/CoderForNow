# gives a list of tuple containing the imput elements
# import logging

greet = ['Hi', 'Hello', 'Namsate', 'Hola', 'Howdy', 'kenchho']
hero = ['batman', 'iron man', 'hulk', 'superman', ' capt. america']
name = ['christian', 'tony', 'bruce', 'steve', 'steven']

# logging.basicConfig(level=logging.DEBUG)

for i in zip( greet, hero, name):
    print(i)
    # logging.warning(' {} is being printed'.format(type(i)))

protduct = [i for i in zip( greet, hero, name) ]
print(protduct)

hero_names = [i for i in zip(*protduct[::-1])]
print(hero_names)
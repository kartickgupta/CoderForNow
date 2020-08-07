import random

# ! Gives random integers from a to b inclusive
value = random.randint(0, 10)
print(value)

# ! Gives random int in range a upto b
value = random.randrange(0, 3)
print(value)

# ! To make a choice from a given set
greetings = ['Hi', 'Hello', 'Howdy', 'Namaste','Kemcho']
greet = random.choice(greetings)
print(f'{greet}, KarticK!')

# ! To make multiple choices from a given along with weights (Optional)
colours = ['Red', 'Yellow', 'White', 'Orange', 'Purple', 'Green']
color = random.choices(colours, weights=[10, 10, 23, 5, 6, 15], k= 20)
print(color)

# ! For choosing random values like cards in a deck
deck = [i for i in range(1, 53)]
cards = random.sample(deck, k = 10)
print(cards)

random.shuffle(deck)
print(deck)

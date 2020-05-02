game = "I want to play a game"
print(game)
print(id(game))
print("--------------------------------")

def game_board():

    global game
    print(id(game))
    print("--------------------------------")

    game = "A game"
    print(id(game))
    print("--------------------------------")
    return game


game_board()
print(game)
print(id(game))

game = "Fuck Off"
print(game)
print(id(game))

 

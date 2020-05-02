game = [2,4,5,6,7]
print(game)
print(id(game))
print("--------------------------------")

def game_board():

    global game
    print(id(game))
    print("--------------------------------")

    game = [99.77,342,76]
    print(id(game))
    print("--------------------------------")
    return game


game_board()

print(game)
print(id(game)) 
print("--------------------------------")

game = [55,63,12,76]
print(game)
print(id(game)) 


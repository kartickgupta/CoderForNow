import itertools


def game_board(current_game, player=0, row=0, column=0, just_display=False):

    try:
        if current_game[row][column] != 0:
            print("This Position is Occupied !")
            return current_game, False

        if not just_display:
            current_game[row][column] = player
        print("   0  1  2")
        for count, row in enumerate(current_game):
            print(count, row)
        return current_game, True
    except IndexError:
        print("You made a mistake !!")
        return False
    except TypeError:
        print("You made a mistake !!")
        return False


def win(current_game):
    def code_small(list):
        if list.count(list[0]) == len(list) and list[0] != 0:
            return True

    # Horizontal Win
    for row in game:
        if code_small(row):
            print(f"Player {row[0]} is the Winner Horitonally (-)")
            return True
    # Vertical Win
    for col in range(len(game)):
        check = []
        for row in game:
            check.append(row[col])
        if code_small(check):
            print(f"Player {check[0]} is Winner Vertically (|)")
            return True
    # Diagonal Win
    check = []
    for index in range(len(game)):
        check.append(game[index][index])
    if code_small(check):
        print(f"Player {check[0]} is Winners Diagonally (\\)")
        return True
    # Dia Win
    diag = []
    for col, row in enumerate(reversed(range(len(game)))):
        diag.append(game[row][col])
    if code_small(diag):
        print(f"Player {diag[0]} is Winners Diagonally (/)")
        return True
    return False

play = True
while play:
    game = []
    game_size = int(input("What Size of Game Do You Want : "))
    for i in range(game_size):
        row1 = []
        for i in range(game_size):
            row1.append(0)
        game.append(row1)


    game_board(game, just_display=True)
    player_choice = itertools.cycle([1, 2])
    game_won = False
    while not game_won:
        current_player = next(player_choice)
        played = False
        while not played:
            print(f"Current Player {current_player}")
            row_choice = int(input("Which Row you would like to play : "))
            column_choice = int(
                input("Which Column you would like to play : "))
            game, played = game_board(
                game, current_player, row_choice, column_choice)

        if win(game):
            game_won = True
            ans = input("Do You Wanna Play Again (y/n) ??? : ")
            if ans.lower() == 'y':
                print("Restarting Game...")
                print(
                    "------------------------------------------------------------------------------------------------")
                play = True
            else:
                print("Good Bye !")
                play = False

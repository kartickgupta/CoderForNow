import itertools
game = [[ 1, 0, 0],
        [ 1, 1, 0],
        [ 1, 1, 0]]

def game_board(current_game,current_player=0,row=0,column=0,just_display=False):
        if not just_display:
                current_game[row][column]=current_player
        print("   0  1  2")
        for count, row in enumerate(current_game):
                print(count,row)
        return current_game
        

'''for element in game[2]:  #----------- Just for printing elements of a specific row
    print(element)    
    '''

#game=game_board(game,just_display=True)
#game=game_board(game,1,2,2)

def win(current_game):
        #Horizontal Win
        for row in game:
                print(row)
                if row.count(row[0]) == len(row) and row[0]!=0:
                        print(f"Player {row[0]} is the Winner Horitonally (-)")
                
        #Vertical Win
        for col in range(len(game)):
                check=[]
                for row in game:
                        check.append(row[col])
                if check.count(check[0])==len(check) and check[0]!=0:
                        print("You are Vertical Winners (|)")

        #Diagonal Win
        check=[]
        for index in range(len(game)):
                check.append(game[index][index])
        if check.count(check[0])==len(check) and check[0]!=0:
                print(f"Player {check[0]} is Winners Diagonally (/)")

        #Dia Win
        diag=[]
        for col, row in enumerate(reversed(range(len(game)))):
                diag.append(game[row][col])
        if diag.count(diag[0])==len(check) and diag[0]!=0:
                print(f"Player {diag[0]} is Winners Diagonally (\\)")

play_again = True
while play_again:
        game = [[ 0, 0, 0],
                [ 0, 0, 0],
                [ 0, 0, 0]]

        player_choice=itertools.cycle([1,2])
        game_over = False
        while not game_over:
                current_player=next(player_choice)
                print(f"Current Player {current_player}")
                row_choice = int(input("Input Row : "))
                column_choice = int(input("Input Column : "))
                game=game_board(game,current_player,row_choice,column_choice)

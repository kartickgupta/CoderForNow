'''game = [[0,0,0],[0,0,0],[0,0,0]]

def game_board(player=0,row=0 ,column=0, just_display=False):
    if not just_display:
        game[row][column]= player
    print("  0  1  2")
    for count, cell in enumerate(game):
        print(count, cell)


game_board(player=3,row=0,column=0)
game_board(just_display=False)
     

game[1][2]=67
for count, cell in enumerate(game):
    print(count, cell)'''

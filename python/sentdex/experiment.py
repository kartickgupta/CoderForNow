#To make an alternating sequence of chances of players
'''players=[1,0]

choice=0
for i in rang(10):
    current_player = choice+1
    print(current_player)
    choice=players[choice]'''

#To make size of tictactoe
def ini(n):
    game=[]
    row=[]
    x=0

    while(x<n):
        row.append(0)
        x+=1
    
    x=0
    while(x<n):
        game.append(row)
        x+=1
    
    #print("   0  1  2")
    for count, row1 in enumerate(game):
        print(count,row1)
    return game

#game_size=int(input("Size of the game: " ))
#ini(game_size)
    



       

import time
import datetime as dt
import tkinter
from tkinter import messagebox
import beeply as bp 

t_now = dt.datetime.now()
t_pom = 10
t_delta = dt.timedelta(0,t_pom)
t_fut = t_now + t_delta
t_break = 10
t_fin = t_now + dt.timedelta(0, t_pom + t_break)


root = tkinter.Tk()
root.withdraw()

messagebox.showinfo("Pomorodo Started!\n", "\nCurently time is"+ t_now.strftime(" %H:%M")+" hrs.\n" + "\nTimer set for 25 mins\n")

total_pomorodo = 0
breaks = 0

while True:
    if t_now < t_fut:
        print('Promodoro Starting')
    
    elif t_fut <= t_now <= t_fin :
        print("In Break")

        if breaks == 0:
            print("Now in a Break")
            mybeep = notes.beeps(400)
            mybeep.hear('C',2000)
            breaks+=1
    
    else:

        breaks =0

        print("Finished!")
        mybeep = notes.beeps(400)
        mybeep.hear('C',2000)

        usr_ans = messagebox.askyesno("Promodo Finished!","Would you like to Continue Again ?")
        total_pomorodo +=1

        if usr_ans == True:
            t_now = dt.datetime.now()
            t_fut = t_now + t_delta
            t_fin = t_fut + dt.timedelta(0, t_pom + t_break)
            continue

        elif usr_ans == False:

            print(f"Promodo Finished! You Have Completed  {total_pomorodo}  Pomodoros Today!")
            messagebox.showinfo("Promodo Finished!\n" + "\nYou Have Completed " + str(total_pomorodo) + " Pomodoros Today!")
            break

print("Now Sleeping!")
time.sleep(20)
t_now = dt.datetime.now()
timenow = t_now.strftime("%H:%M")


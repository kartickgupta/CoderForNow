import os

os.chdir('/home/kartickgupta/Kartick/Sentdex')

for f in os.listdir():
	f_name, f_ext = os.path.splitext(f)
	print(f_name)
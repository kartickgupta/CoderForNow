my_lists = ['one',2,4.555555,'two','twenty thousand']
print(my_lists)                
print(type(my_lists))
print(my_lists[0])
print(my_lists[2:])          #lists can be indexed, sliced and nested
my_lists[1]=78               #lists are mutable
print(my_lists)
my_lists.append(900000)        #function for adding something in the list by default adds in end
print(my_lists)
my_lists.pop(3)                     #function for adding something in the list either put index no or it removes from the end
print(my_lists)                      #.pop returns something
print(len(my_lists))

#DICTIONARIES
my_dic={'apple':5.66,'banana':90,'milk':'comodity','k1':[2,3.44,'panda'],'k2':{'lion':'king of jungle'}} #its unoredered pairing of objects
print(my_dic['apple'])                              #prints associated pair of apple 
print(my_dic['k1'][2])
print(my_dic['k2']['lion'])     #you can store lists and dictionary in a dictionary
print(my_dic.keys())
print(my_dic.values())
print(my_dic.items())
print(len(my_dic))


#TUPLES---------------lists with immutability
tupl=2,5.6666,'pandas',{'key1':'value1','key2':7899000},['you',7890000,89.00,['hello',678]]
print(tupl)
print(len(tupl))

programming_languages= 'Python',"C++", 'Java', 'C#'
print(type(programming_languages))
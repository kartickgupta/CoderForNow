try :
    f = open('hello.txt')
    if f.name == 'hello.txt':
        raise 'Wrong File accessed'
        
except Exception as e:
    print(e)

finally:
    print('This Line gets excuted no matter what, whether there\'s an exception or not!')
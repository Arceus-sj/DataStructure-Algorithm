# x = 5
# y = 5
# z = 2 * (x + y)
# print( x + y )
# print(z)



# x = 1
# y = ' Arceus '
# print(x)
# print(y)
# z = str(x) + y #type-caste
# print(type(z))


# x = 777
# x = 'sia'
# print(x)


# right variable declaration:
# myname = ' Arceus '
# my_name = ' Arceus '
# _my_name = ' Arceus '
# myName = ' Arceus '
# MYNAME = ' Arceus '
# myName2 = ' Arceus '
# print(myname + _my_name + my_name + myName + MYNAME + myName2)


# x,y = " Monk "," Coder "
# print(x + y + 'is Legend.')

# x = y = 'Arceus'
# print(x)
# print(y)


# x = "Shnatanu "
# y = "Jana"
# z = x + y
# print(x + y)
# print(z)


# Global Variable declaration

# x = "Arceus " #Global variable

# def myfunc():
#     x = 'arceus ' #local variable
#     print(x + 'is my Coding World Name.')
# myfunc()

# print(x + 'is my Coding World Name.')


#Golable Keyword declaration:
x = 'Shantanu'

def myFunc():
    global x #global keyword
    x = " Arceus"
    print('My name is' + x)
myFunc()

print('My name is' + x)


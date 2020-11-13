# there are no difference between ' ' and " "
# print('Arceus')
# print("Arceus")

# Multi-line string:

# print(
#     '''
# Lorem ipsum dolor sit amet,
# consectetur adipiscing elit,
# sed do eiusmod tempor incididunt
# ut labore et dolore magna aliqua.
#     '''
# )

# print(
# """ Lorem ipsum dolor sit amet,
# consectetur adipiscing elit,
# sed do eiusmod tempor incididunt
# ut labore et dolore magna aliqua."""
# )




# index
# a = 'Arceus'
# print(a[0])
# print(a[1])
# print(a[2])
# print(a[3])
# print(a[4])
# print(a[-1])



# slice-Function
# a = 'Arceus is a coder!'
# print(a[0:])
# print(a[0:6])
# print(a[7:9])
# print(a[10:17])


# string length
# a = 'Arceus is a coder!'
# print(len(a))

# ----------------------------#



# String ,Meathod

# Strip() function:  The strip() method removes any whitespace from the beginning or the end:
# a = 'Arceus is a coder! '
# print(a.strip())
# print(a.strip('A'))

# lower() method returns the string in lower case
# a = "Hello, World"
# print(a.lower())

# #The upper() method returns the string in upper case
# print(a.upper())

# # The replace() method replaces a string with another string
# print(a.replace("H","S"))
# print(a.replace("World","Shantanu"))

# # The split() method splits the string into substrings if it finds instances of the separator
# print(a.split(","))


# Finding meathod
txt = 'My Name is Shantanu Jana'
#      0123456789
print(txt.find('N'))
print('Shantanu' in txt)



# Check String
'''To check if a certain phrase or character is present in a string,
we can use the keywords in or not in.'''

# txt = "The rain in Spain stays mainly in the plain"
# x = 'ain' in txt
# y = 'my' not in txt
# # It will return bool
# print(x)
# print(y)
# print(type(x))
# print(type(y))



# String Format

# it will give error cause age is integer-data-type
# we want str data type...
# age = 19
# txt = 'I am ' + age + ' year old.'
# print(txt)


# age = 36
# txt = "I'm {} year old."
# print(txt.format(age))

# uid = '19BCS3536'
# print(type(uid))

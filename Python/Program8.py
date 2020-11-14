names = ["PUBG", "GTA-5", "Mumbiker Nikhil", "BB k vine"]
print(names)
# printing name index wise-->
print(names[0])
print(names[1])
print(names[-2])
print(names[-1])
print('--------------------------------------------')


# select a particular section using index
# syntax--> variableName = [" "," "," "]

print("I like to play " + str(names[0:2]))
print("I like to watch " + str(names[2:4]))
print(names[0:3])



# to check the length of list:
print(len(names))


# to check the data type of list:
list1 = [1, 2, 3, 4]
list2 = [True, False, True]
list3 = ["name1", "name2", "name3", "name4"]
print(type(list1))
print(type(list2))
print(type(list3))

print('--------------------------------------------')

# A list can contain different type of data type:
list4 = ["my uid is", 19, "BCS", 3536, True]
print(list4)

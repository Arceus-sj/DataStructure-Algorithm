a = int(input("Enter your number1:"))
b = int(input("Enter your number2:"))
c = int(input("Enter your number3:"))

#expression-1
if a > b : 
	print(str(a) + " is greater...")
elif a == b :
	print("Both are equal...")
else :
	print(str(b) + " is greater...")


#expression-2 (Ternary Operators)
 
print(str(a) + " is greater...") if a > b else print(str(b) + " is greater...") 
    



#expression-3
 
print(str(a) + " is greater...") if a > b else print("Both are equal...") if a == b else print(str(b) + " is greater...") 




#expression-4 (Logical 'AND' operator)
 
if a > b and c > b:
	print("Both condition are true...")
else:
	print("condition is not true...")



#expression-5 (Logical 'OR' operator)
 
if a > b or c > b:
	print("one or more than one condition is true...")



#expression-6 (Nested If)
 
if a > 5 :
	if  a > 10:
		print(str(a) + " greater than 10")
	else:
		print(str(a) + " less than 10")



 
#expression-7 (pass Statement)
'''if statements cannot be empty, but if you for some reason have an if statement with no content, put in the pass statement to avoid getting an error'''

if a > b:
	pass

a = 6
b = 0
 
try:
    print("System Open...")
    
    k = int(input("Enter a Number: "))
    print(k)
    
    print(a/b)
        
except ZeroDivisionError as e:
    print("You cannot divide a Number with zero...", e)

except ValueError as e:
    print("You cannot give input as any letter...", e)
   
except Exception as e:
    print("Something went wrong...", e)

finally:
    print("System Closed...") 

print("Done")

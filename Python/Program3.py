# so we have differnt function to convert str to int, float, bool etc.

print('Example 1:\n')

birth_year = input('Birth year: ')
age = 2020 - int(birth_year)
print('you are '+ str(age) + ' year old.')

print("----------------------------------------")


print('Example 2:\n')

weight_lsb = int(input('Enter your weight(lsb): '))
weight_kg = weight_lsb * 0.45
print(weight_kg , 'Kg')

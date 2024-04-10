# problem 1
#str1 = 'pithon'
# str1[2] = 'y' # error
#str2 = str1[:1] + 'y' + str1[2:]
#str3 = str1.replace('it', 'y')
#str4 = 'python'

#print(str1, str2, str3)

# problem 2
#celsius = float(input('화씨 온도를 입력해 주세요: '))
#fahrenheit = (celsius * 9 / 5) + 32
#print(fahrenheit)

# problem 3
keys = input('key: ').split(' ')
values = input('value: ').split()

#result1 = dict()
#result1[keys[0]] = values[0]
#result1[keys[1]] = values[1]
#result1[keys[2]] = values[2]
#result1[keys[3]] = values[3]

print(zip(keys, values))
result2 = dict(zip(keys, values))

print(result2, sep='\n')

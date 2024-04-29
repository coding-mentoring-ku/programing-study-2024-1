input_string = input()
time = 0
for i in input_string:
    if 'A' <= i <= 'C':
        time += 3
    elif 'D' <= i <= 'F':
        time += 4
    elif 'G' <= i <= 'I':
        time += 5
    elif 'J' <= i <= 'L':
        time += 6
    elif 'M' <= i <= 'O':
        time += 7
    elif 'P' <= i <= 'S':
        time += 8
    elif 'T' <= i <= 'V':
        time += 9
    elif 'W' <= i <= 'Z':
        time += 10

print(time)


time = 0
dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
# 'UNUCIC' = input_string
# i = U, N, U, C, I, C
# for i in (1, 2, 3) -> 1, 2, 3.
# for i in range(1, 10)
for i in input_string:
    for j in range(len(dial)):
        if i in dial[j]:
            time += (3+j)
            break
print(time)


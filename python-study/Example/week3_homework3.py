need_data = [1, 1, 2, 2, 2, 8]
out_data = [0, 0, 0, 0, 0, 0]
x = map(int, input().split()) # 0 1 2 2 2 7 -> x = [0, 1, 2, 2, 2, 7]

for i in range(0, len(need_data), 1):
    out_data[i] = need_data[i] - int(x[i])
    print(out_data[i], sep=" ")
print()

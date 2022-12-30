



with open("message.txt") as d:
    data = d.read()

mainData = []

for i in range(0, len(data), 3):
    chunk = data[i : i + 3]
    a, b, c = chunk
    tmp = a
    a = c
    c = b
    b = tmp
    mainData.append(a)
    mainData.append(b)
    mainData.append(c)


print("".join(mainData))



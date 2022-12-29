import string


with open("message.txt") as rr:
    data = rr.read()


upperCaseKey = "gzray hra wimybas yzs hvij"
lowerCaseKey = upperCaseKey.lower()

flag = []


for character in data:
    if(character.isupper()):
        pos = upperCaseKey.index(character)
        flag.append(string.ascii_uppercase[pos])
    elif(character.islower()):
        pos = lowerCaseKey.index(character)
        flag.append(string.ascii_lowercase[pos])
    else:
        flag.append(character)

flag = "".join(flag)
print(flag.split()[-1])
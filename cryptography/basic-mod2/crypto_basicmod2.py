import string



with open("message.txt") as num:
    numContent = num.read()
    number = [int(val) for val in numContent.split()]

flag = []

def convertModInverse(number):
    for i in number:
        modNumber = pow(i, -1, 41)
        # print(modNumber, end = " ")
        if(modNumber in range(1, 27)):
            flag.append(string.ascii_uppercase[modNumber - 1])
        elif(modNumber in range(27, 37)):
            flag.append(string.digits[modNumber - 27])
        else:
            flag.append("_")
    



convertModInverse(number)
print("picoCTF{","".join(flag), "}")

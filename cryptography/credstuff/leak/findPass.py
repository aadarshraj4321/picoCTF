import string


with open("usernames.txt") as user:
    username = user.read()
    usernames = [allUser for allUser in username.split("\n")]

# print(usernames)

with open("passwords.txt") as password:
    password = password.read()
    passwords = [allPassword for allPassword in password.split("\n")]

# print(passwords)


# find password for the username called (cultiris)

culPassword = ""
for i in range(len(usernames)):
    if(usernames[i] == "cultiris"):
        for j in range(len(passwords)):
            if(i == j):
                culPassword = passwords[j]

print(culPassword)




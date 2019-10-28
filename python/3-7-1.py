results = {}
number = int(input())
for i in range(number):
    command_1, goals_1, command_2, goals_2 = (i for i in input().split(";"))
    print(command_1, goals_1, command_2, goals_2)

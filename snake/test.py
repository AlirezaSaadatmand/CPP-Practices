inbase = int(input())
num = int(input())
outbase = int(input())
numDes = 0
if inbase != 10:
    lst = []
    for i in range(len(str(num))):
        if num % 10 > inbase:
            print("all digits must be less than the input base")
            break
        lst.append(num % 10)
        num //= 10
    num = 0
    for index, value in enumerate(lst):
        num += value * pow(inbase, index)

if outbase == 10:
    print(num)
else:
    output = ""
    while True:
        output += str(num % outbase)
        num = num // outbase
        if num // outbase < outbase:
            output += str(num % outbase)
            output += str(num // outbase)
            break

    print(int(output[::-1]))

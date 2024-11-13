def toDecimal(inbase, number):

    num = int(str(number).split(".")[0])
    des = int(str(number).split(".")[1])

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

    lst = []
    for i in range(len(str(des))):
        lst.append(des % 10)
        des //= 10
    lst.reverse()

    x = 0
    for index, value in enumerate(lst):
        index = (index + 1)*(-1)
        x += value * pow(inbase, index)
    return num + x


def change(number, outbase):
    num = int(str(number).split(".")[0])
    des = float("0." + str(number).split(".")[1])
    output = ""
    while True:
        output += str(num % outbase)
        num = num // outbase
        if num // outbase < outbase:
            output += str(num % outbase)
            output += str(num // outbase)
            break
    num = int(output[::-1])

    count = 0
    string = "0."
    while True:
        if count > 5 or des == 0:
            break
        string += str(int(des * outbase))
        des = float("0." + str(round(des * outbase, 1)).split(".")[1])
        count += 1
    return num + float(string)


inbase = int(input())
number = float(input())
outbase = int(input())

if inbase != 10:
    number = toDecimal(inbase, number)
number = change(number, outbase)
print(number)

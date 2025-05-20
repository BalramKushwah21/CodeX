while(True):

    num = str(input("Enter values with operator : "))
    if "+" in num:
        num1 = num.split("+")
        print("Sum is : ",int(num1[0])+int(num1[1]))

    elif "-" in num:
        num1 = num.split("-")
        print("Substraction is : ",int(num1[0])-int(num1[1]))


    elif "*" in num:
        num1 = num.split("*")
        print("Multiplication is : ",int(num1[0])*int(num1[1]))

    elif "/" in num:
        num1 = num.split("/")
        print("Division is : ",int(num1[0])/int(num1[1]))

    else:
        print("Invailid input")
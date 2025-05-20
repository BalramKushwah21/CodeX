# cook your dish here
T = int(input("Test case : "))

while(T>0):
    N = int(input("Student Numbers ; "))
    H = input()
    li =H.split(" ")
    length = len(li)
    for i in range(length):
        a = int(li[i])
        b = int(li[length-1])
        if(a>=b):
            print((length-1)-i)
            break
        elif(i==(length-1)):
            print(0)
    
    T = T-1
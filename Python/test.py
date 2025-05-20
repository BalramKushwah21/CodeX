num = "120 14"

num1 =num.split(" ")
B = int(num1[0])
N = int(num1[1])
print(num1)
if(B>=N*10):
    print("YES")
else:
    print("NO")

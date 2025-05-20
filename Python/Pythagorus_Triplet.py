arr = list(input("Enter list : "))
arr2 = []
x=False
lenth= len(arr)
for a in range(lenth):
    b= int(arr[a])
    arr2.append(b)
# for i in range(lenth):
#     for j in range(1,lenth):
#         for k in range(2,lenth):
            
#             if((arr2[i])**2+(arr2[j])**2==(arr2[k])**2):
#                 print(True)
          

for i in range(lenth):
    for j in range(i+1,lenth):
        for k in range(i+2,lenth):
            a = arr2[i]
            b = arr2[j]
            c = arr2[k]


            if(a*a+b*b==c*c or a*a+c*c==b*b or b*b+c*c==a*a):
                print("Triplet : ",a," ", b," ",c)
                
                x = True
if(x!= True):
    print(False)                
            



#  Using a function


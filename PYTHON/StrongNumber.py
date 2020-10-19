#program to check a number is a Strong number
sum1=0
num=int(input("Enter anumber:"))
temp=num
while(num):
    i=1
    f=1
    r=num%10
    while(i<=r):
        f=f*i
        i+=1
    sum1=sum1+f
    num=num//10
if(sum1==temp):print("the number is a strong number")
else:print("the number is not a strong number")

n=int(raw_input())
a=0
b=1
print(a)
print(b)
if(n<0):
	print("enter other number")
elif(n==0):
	print("the fibonacci series is")
else:
	for i in range(1,n):
		c=a+b
		a=b
		b=c
		print(b)

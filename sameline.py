inp1=input()
a=inp1.split(" ")
print(a)
inp2=input()
b=inp2.split(" ")
print(b)
a1=len(a)
b1=len(b)
if(a1==b1):
	for i in range(0,a1):
		if(a[i]==b[i]):
			print("yes")

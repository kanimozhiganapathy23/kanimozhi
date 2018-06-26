inp1="kabali"
b=sorted(inp1)
inp2=int(input())
count=0
lis=[]
for i in range(0,inp2):
	inp3=input()
	a=sorted(inp3)
	lis.append(a)
print(lis)
for i in lis:
	if(b==i):
		count=count+1
print(count)
	

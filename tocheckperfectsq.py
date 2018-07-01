i=int(input())
r=int(input())
count=0
for p in range(i,r+1):
	n=int(p**(0.5))
	if(p==(n*n)):
		count=count+1
print(count)

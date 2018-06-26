inp=input()
l=inp.split(" ")
s=set(l)
for i in s:
	count=0
	for j in l:
		if(i==j):
			count=count+1
	if(count==1):
		print(i)

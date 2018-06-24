inp=input()
lis=list(inp)
print(lis)
list2=[]
rev=lis[::-1]
print(rev)
list1=["a","e","i","o","u"]
for i in rev:
	if i not in list1:
		list2.append(i)
print("".join(list2))
		
		 

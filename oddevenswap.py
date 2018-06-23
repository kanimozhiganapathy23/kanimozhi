inp=raw_input()
list1=list(inp)
list2=[]
print list1
for i in range(0,len(list1),2):
	list2.append(list1[i+1])
	list2.append(list1[i])
print list2

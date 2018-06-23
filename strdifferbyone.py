inp1=raw_input()
count=0
list1=list(inp1)
print list1
inp2=raw_input()
list2=list(inp2)
print list2
len1=len(list1)
len2=len(list2)
if(len1==len2):
	length=len1=len2
	for i in range(0,length):
		if(list1[i]!=list2[i]):
			count=count+1
if(count==1):			
	print "yes"
else:
	print "no"

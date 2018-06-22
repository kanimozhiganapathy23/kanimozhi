n=raw_input()
stack=list(n)
l=[]
list=stack[:]
for i in list:
	l.append(stack.pop())
print("".join(l))

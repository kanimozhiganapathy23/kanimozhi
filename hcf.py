inp1=int(raw_input())
inp2=int(raw_input())
if(inp1>inp2):
	smaller=inp1
else:
	smaller=inp2
for i in range(1,smaller+1):
	if(inp1%i==0)and(inp2%i==0):
		hcf=i
print hcf

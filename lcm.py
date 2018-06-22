inp1=raw_input()
inp2=raw_input()
if(inp1>inp2):
	greater=inp1
else:
	greater=inp2
while(True):
	if(greater%inp1==0)and(greater%inp2==0):
		lcm=greater
		break
	greater=greater+1
print lcm

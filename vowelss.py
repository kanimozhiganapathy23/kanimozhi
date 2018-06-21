inp=raw_input()
list=['a','e','i','o','u','A','E','I','O','U']
for i in inp:
	if i in list:
		f=0
	else:
		f=1
if(f==0):
	print "yes"
if(f==1):
	print "no"

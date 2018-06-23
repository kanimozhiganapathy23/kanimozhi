a=raw_input()
lis1=['sunday','saturday']
lis2=['monday','tuesday','wednesday','thursday','friday']
if(a in lis1):
	print "holiday"
elif(a in lis2):
	print "working day"
else:
	print "invalid"

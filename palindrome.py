n=int(raw_input())
num=n
sum1=0
while num!=0:
	rem=num%10
	sum1=sum1*10+rem
	num=num/10
if sum1==n:
	print("is palindrome")
else:
	print("is not palindrome")

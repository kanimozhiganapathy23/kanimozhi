lis=[3,17,1,8,9,29]
p=max(lis)
q=min(lis)
lis1=[]
lis1.append(p)
lis1.append(q)
lis.remove(p)
lis.remove(q)
print(lis)
for i in lis:
    lis1.append(i)
print(lis1)

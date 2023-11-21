a=[]
c=input("enter the numbers with comas:")
b=list(map(int,c.split(",")))
sm=min(b)
for x in b:
   if(x!=sm):
       a.append(x)
print(min(a))

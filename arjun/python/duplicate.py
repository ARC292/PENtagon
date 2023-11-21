l=[]
c=input("enter the elements with comas")
d=list(map(int,c.split(",")))
for x in d:
 if(x not in l):
     l.append(x)
print(l)
     

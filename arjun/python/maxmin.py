
c=input("enter the numbers seperate with comas:")
d=c.split(",")
print(d)
f=list(map(int,d))
print(f)
lar=max(f)
sm=min(f)
print("large=",lar)
print("small=",sm)


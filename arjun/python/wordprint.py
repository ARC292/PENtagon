c=input("enter the word seperately with comas:")
d=c.split(",")
n=int(input("enter the number:"))
for x in d:
  if(len(x)>n):
   print(x) 

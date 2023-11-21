s=input("enter the full ames with comas seperation")
name=s.split(",")
names=[x.split() for x in name]
first=[x[0] for x in names]
print("the first names",first)
print(names)
count=0
for x in names:
  if(x[0][0]=="a" or x[0][0][0]=="A"):
       count=count+1

print("the number of letter A in the line is ",count)  

     

     

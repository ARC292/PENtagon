print("PART A")
a=input("enter the elements seperated by comas:")
a=list(map(int,a.split(",")))

pos=[x for x in a if (x>0)]
print(pos)

print("PART B")

sqr=[x**2 for x in a ]
print(sqr)

print("PART C")

vowels=["a","A","e","E","i","I","o","O","u","U",]
string1=input("enter the string:")
string2=list(string1)
v=[x for x in string2 if(x in vowels)]
print("the vowels are:",v)

print("PART D")

noteven=[x for x in a if(x%2==1) or x<=0]
print("not even",noteven)

print("PART D")

y=int(input("enter the year"))
leap=[x for x in range(2023,y) if((x%400==0) or (x%100!=0) and (x%4==0))]
print("leap years:",leap)

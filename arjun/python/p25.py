'''a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))a=int(input("enter the 1st number"))
b=int(input("enter the 2st number"))
large=lambda a,b:max(a,b)
print("the largest of two is :",large(a,b))

n=int(input("enter the number:"))
divisible=lambda n:not n%5
print("the  number n is divisible by 5:",divisible(n))'''

l=input("enter the list of integers:")
l=list(map(int,l.split()))
l=list(map(lambda x:x + x*0.1 if x>1000 else x + x*0.05,l))
print(l)

c=input("enter the numbers with comas")

def eve(c):
     c=map(int,c.split(","))
     for i in c:
      if(i==237):
        break;
      elif(i%2==0):
       print("the list ",i)


eve(c)   

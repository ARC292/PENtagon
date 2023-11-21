c=input("enter the sentence:")
c=c.split()
r=[x for x in c if len(x)==len(max(c,key=len))]
if(len(r)>2):
 print("bingo")
else:
  print(c[0])

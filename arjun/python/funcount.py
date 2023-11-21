lis=input("enter the words with space")
lis=lis.split()
def c(n):
  co=0
  for i in lis:
    if(len(i)>1 and i[0]==i[-1]):
       co=co+1
  return co
r=c(lis)
print(r)
   

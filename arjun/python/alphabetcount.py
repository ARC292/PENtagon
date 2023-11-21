word={}
line=input("enter the word:")
for i in line:
  word[i]=word.get(i,0)+1
print("the count:",word)  

 

word={}
line=input("enter the sentance")
for i in line.split():
  word[i]=word.get(i,0)+1
print(word)  
 

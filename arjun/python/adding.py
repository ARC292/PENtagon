c=input("enter the sentence:")
if(c.lower().endswith("ing")):
   c=c+"ly"
else:
   c=c+"ing"
print(c)   

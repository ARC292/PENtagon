col1=input("enter the integer collection one:")
col1=set(map(int,col1.split(",")))

col2=input("enter the integer collection two:")
col2=set(map(int,col2.split(",")))
print("the length are equal:",len(col1)==len(col2))
print("there sum are equal:",sum(col1)==sum(col2))
print("have same values in both",bool(len(col1&col2)))

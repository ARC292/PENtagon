name=input("ener the name with spaces")
def fun(name):
  
    name=name.split()
    name=name[::-1]
    return name
rev=fun(name)
print(rev)

  

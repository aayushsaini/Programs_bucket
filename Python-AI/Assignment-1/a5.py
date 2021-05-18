#Dictionary
D= {1: "One", 2: "Two", 3: "Three", 4: "Four", 5: "Five"}

#Add new key & value
D[6] = "Six"
D.pop(2)

#Check for Key:6 in D
if(D.get(6)):
    print(True)
else:
    print(False)

#Print D
print(D)

#Print Total values in D
print("Total values: ", len(D))

#Add all values of D
s = ""
for x in D.values():
    s += x
print(s)
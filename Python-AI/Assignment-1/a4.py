#List program

L = list(range(10, 90, 10))
L.append(200)
L.append(300)
L.sort()
print(L)
L.sort(reverse=True)
print(L)
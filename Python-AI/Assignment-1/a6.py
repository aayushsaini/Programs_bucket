#Generate list of 100 numbers randomly from [100..900] and implement Even, Odd, Prime number ops 

import random

def is_prime(x):
    for i in range(2, x//2):
        if (x%i) == 0:
            return False
    return True

lst = []
for i in range(1,101):
    lst.append(random.randrange(100, 900))

print('\nEven numbers: ')
for x in lst:
    if (x%2 == 0):
        print(x,end=" ")

print('\n\nOdd numbers: ')
for x in lst:
    if (x%2 != 0):
        print(x,end=" ")

print('\n\nPrime numbers: ')
for x in lst:
    if (is_prime(x)):
        print(x, end=" ")
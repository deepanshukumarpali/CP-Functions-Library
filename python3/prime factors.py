from math import *

def PrimeFactors(n):
    factors=[]
    while(n%2==0):
        factors.append(2)
        n//=2
    for i in range(3,int(sqrt(n))+1,2):
        while(n%i==0):
            factors.append(i)
            n//=i
    if(n>1):
        factors.append(n)

    return factors


# Example Test Run

# n=30
# print(PrimeFactors(n))

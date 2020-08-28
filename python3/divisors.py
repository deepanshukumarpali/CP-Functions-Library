from math import sqrt

def divisors(n):
    div=set()
    for i in range(1,int(sqrt(n))+1):
        if(n%i==0):
            div.add(i)
            div.add(n//i)
    return div


# Example Test Run

# n=30
# print(divisors(n))
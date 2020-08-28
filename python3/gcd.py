def gcd(a,b):  
    if (b==0): 
         return a 
    return gcd(b, a%b)

# Example Test Run

# a=8
# b=4
# print(gcd(a,b))  

# output:  4
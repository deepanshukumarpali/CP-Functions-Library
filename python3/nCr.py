from math import gcd
  
def nCr(n,r): 
    p,k=1,1
    r=min(n-r,r) 
  
    if(r!=0):
        while(r): 
            p*=n 
            k*=r
            m=gcd(p,k)  
            p//=m 
            k//=m 
            n-=1
            r-=1
    else: 
        p=1    
    return p 


# Example Test Run

# n=5
# r=2
# print(nCr(n,r))

# output:  10
M=10000009

def nCr(n, r, p=M): 
    num=1
    den=1 
    for i in range(r): 
        num=(num*(n-i))%p 
        den=(den*(i+1))%p 
    return (num*pow(den,p-2,p))%p 


# Example Test Run

# n=30
# r=1
# print(nCr(n,r))
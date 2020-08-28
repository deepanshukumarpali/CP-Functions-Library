def primeN(n): 
    prime = [True for i in range(n+1)] 
    prime[0]=False
    prime[1]=False
    p=2
    while(p*p<=n): 
        if(prime[p]): 
            for i in range(p*p,n+1,p): 
                prime[i]=False
        p+=1
    return [p for p in range(n+1) if(prime[p])]


# Example Test Run

# n=30
# print(primeN(n))  

# output:  [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]
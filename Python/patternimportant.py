n=int(input())
n1=n//2
if n%2==0:
    for i in range(n1):
        for j in range((n*i*2)+1,(n*i*2)+(n+1)):
            print(j,' ', end='')
        print()
    for i in range(n1):
        k=n*((n-1)-(2*i))+1
        for j in range(k,k+n):
            print(j,' ',end='')
        print()
else:
    n2=(n+1)//2
    for i in range(n2):
        for j in range((n*i*2)+1,(n*i*2)+(n+1)):
            print(j,' ', end='')
        print()
    for i in range(n2-1):
        k=n*((n-2)-(2*i))+1
        for j in range(k,k+n):
            print(j,' ',end='')
        print()


        
               
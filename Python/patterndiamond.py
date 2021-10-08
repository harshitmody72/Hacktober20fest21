n=int(input())
n1=(n//2)+1
for i in range(1,n1+1,1):
    for space1 in range(n1-i):
        print(' ',end='')
    for star1 in range(i):
        print('*',end='')
    for star2 in range(i-1):
        print('*',end='')
    print()
n2=n//2
for j in range(1,n2+1,1):
    for space2 in range(j):
        print(' ',end='')
    for star3 in range(n2-j+1):
        print('*',end='')
    for star4 in range(n2-j):
        print('*',end='')
    print()
        
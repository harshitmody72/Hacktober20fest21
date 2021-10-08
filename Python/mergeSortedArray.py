def mergesortedarrays(arr1,arr2):
    i=0
    j=0
    arr=[]
    while i<m and j<n:
        if arr1[i]<arr2[j]:
            arr.append(arr1[i])
            i=i+1
        else:
            arr.append(arr2[j])
            j=j+1
    while i<m:
        arr.append(arr1[i])
        i=i+1
    
    while j<n:
        arr.append(arr2[j])
        j=j+1
    return arr
        
m=int(input())
arr1=list(map(int,input().split()))
n=int(input())
arr2=list(map(int,input().split()))            

print(mergesortedarrays(arr1,arr2))
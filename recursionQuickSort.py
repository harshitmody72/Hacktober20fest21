def partition(li,s,e):
    #target of partition is to place pivot at its correct position and all elements less than pviot before pivot
    #and all  greater than pivot after after pivot
    
    pivot=li[s]
    c=0
    for z in range(s,e+1):
        if li[z]<pivot:
            c=c+1
            
    #swap
    li[s+c],li[s]=li[s],li[s+c]
    
    i=s
    j=e
    
    while i <j:
        if li[i]<pivot:
            i=i+1
        elif li[j]>=pivot:
            j=j-1
        else:
            li[i],li[j]=li[j],li[i]
            i=i+1
            j=j-1

    return s+c
def quickSort(arr, start, end):
    if start >= end:
        return
    pivot_index=partition(arr,start,end)
    quickSort(arr,start,pivot_index-1)
    quickSort(arr,pivot_index+1,end)

n=int(input())
arr=list(int(i) for i in input().strip().split(' '))
quickSort(arr, 0, n-1)
print(*arr)

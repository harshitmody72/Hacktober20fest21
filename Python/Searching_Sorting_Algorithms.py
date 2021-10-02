## Linear Search 
def linear_Search(list1, n, key):  
  
    # Searching list1 sequentially  
    for i in range(0, n):  
        if (list1[i] == key):  
            return i  
    return -1  
list1 = list(int(i) for i in input().strip().split(' ')) 
key = int(input())
n = len(list1)  
res = linear_Search(list1, n, key)  
print(res)


## Binary Search
def binary_search(list1,low,high,n):
    if low<=high:
        mid=(low+high)//2
        if list1[mid]==n:
            return mid
        elif list1[mid]>n:
            return binary_search(list1,low,mid-1,n)
        else:
            return binary_search(list1,mid+1,high,n)
    else:
        return -1
list1=list(int(i) for i in input().strip().split(" "))
n=int(input())
res=binary_search(list1,0,len(list1)-1,n)
print(res)

## Selection Sort
def selection(arr):    
    for i in range(len(arr)):
        min=i
        for j in range(i+1,len(arr)):
            if arr[min]>arr[j]:
                min=j
        arr[i],arr[min]=arr[min],arr[i]
    return arr
arr=[int(x) for x in input().split(" ")]
print(selection(arr))
        
## Insertion Sort
def insertion(arr):
    for i in range(len(arr)):
        key=arr[i]
        j=i-1
        while j>=0 and key<arr[j]:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key
    return arr
arr=[int(x) for x in input().split(" ")]
print(insertion(arr))
            
## Bubble Sort
def bubble(arr):
    for i in range(len(arr)):
        swapped=False
        for j in range(0,len(arr)-i-1):
            if arr[j]>arr[j+1]:
                arr[j+1],arr[j]=arr[j],arr[j+1]
                swapped=True
        if swapped==False:
            break
    return arr
arr=[int(x) for x in input().split(" ")]
print(bubble(arr))
                
## Merge Sort
def merge(arr):
    if len(arr)>1:
        mid=len(arr)//2
        L=arr[:mid]
        R=arr[mid:]
        merge(L)
        merge(R)
        i=j=k=0
        while i<len(L) and j<len(R):
            if L[i]<R[j]:
                arr[k]=L[i]
                i+=1
            else:
                arr[k]=R[j]
                j+=1
            k+=1
        while i<len(L                                   ):
            arr[k]=L[i]
            i+=1
            k+=1
        while j<len(R):
            arr[k]=R[j]
            j+=1
            k+=1
    return arr
a=list(int(i) for i in input().strip().split(' '))
print(merge(a))


## Quick Sort
def partition(a, si, ei):
    pivot = a[si]
    #find number of elements smaller than pivot    
    count = 0
    
    for i in range(si, ei+1):
        if a[i] < pivot:
            count = count + 1
    
    a[si+count], a[si] = a[si], a[si+count]
    pivot_index = si + count
    
    i = si
    j = ei

    while i < j:
      if a[i] < pivot:
        i = i + 1
      elif a[j] >= pivot:
        j = j - 1
      else:
        a[i], a[j] = a[j], a[i]
        i = i + 1
        j = j - 1
        
    return pivot_index
def quick_sort(a, si, ei):
    if si >= ei:
        return 
    
    pivot_index = partition(a, si, ei)
    quick_sort(a, si, pivot_index-1)
    quick_sort(a, pivot_index+1, ei)

ei=int(input())
a=list(int(i) for i in input().strip().split(' '))
quick_sort(a, 0, ei-1)
print(*a)

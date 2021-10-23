#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution
{   public:
    int partition (int a[], int l, int h)
    {int pivot = a[l];
    int i=l-1, j=h+1;
    while(true){
        do{
           i++;
        }while(a[i]<pivot);

        do{
           j--;
        }while(a[j]>pivot);

        if(i>=j){
          return j;
        }
        swap(a[i], a[j]);

        }
    }

    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int l, int h)
    {if(l<h){
       int p = partition(a, l, h);
       quickSort(a, l, p);
       quickSort(a, p+1, h);
       }
    }

};
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}

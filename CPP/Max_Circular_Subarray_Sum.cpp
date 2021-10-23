#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int normal(int arr[], int n){
        int res=arr[0], maxend=arr[0];
        for(int i=1; i<n; i++){
            maxend=max(arr[i], maxend+arr[i]);
            res=max(res, maxend);
        }
        return res;
    }
    int overallmax(int arr[], int n){
        int maxnormal=normal(arr, n);
        if(maxnormal<0){
            return maxnormal;
        }
        int arraysum=0;
        for(int i=0; i<n; i++){
            arraysum+=arr[i];
            arr[i]=-arr[i];
        }
        int maxcircular=arraysum+normal(arr, n);
        return max(maxnormal, maxcircular);
    }
    int circularSubarraySum(int arr[], int num){
        int res=overallmax(arr, num);
        return res;
    }
};

int main()
 {
	int T;

	//testcases
	cin>> T;

	while (T--)
	{
	    int num;

	    //size of array
	    cin>>num;
	    int arr[num];

	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];

	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;

	}

	return 0;
}

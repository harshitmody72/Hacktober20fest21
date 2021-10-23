/*Implementation of bucket sort */
#include<bits/stdc++.h>
using namespace std;

void bucketSort(int arr[], int n, int k){
    int max_value = arr[0];
    for(int i = 0; i<n; i++){
        max_value = max(max_value, arr[i]);
    }
    max_value++;
    vector<int> bkt[k];
    for(int i = 0; i<n; i++){
        int bi = (k*arr[i])/max_value;
        bkt[bi].push_back(arr[i]);
    }
    for(int i = 0; i<k; i++){
        sort(bkt[i].begin(), bkt[i].end());
    }
    int index = 0;
    for(int i = 0; i<k; i++){
        for(int j = 0; j<bkt[i].size(); j++){
            arr[index++] = bkt[i][j];
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    return 0;
}
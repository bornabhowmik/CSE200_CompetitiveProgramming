#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k){

    int temp[n];
    int count=0;

    for(int i=k; i<n; i++){
        temp[count]=arr[i];
        count++;
    }

    for(int i=0; i<k; i++){
        temp[count]=arr[i];
        count++;
    }

    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
}


int main() {
    
    int n, k;
    cin>>n>>k;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    solve(arr, n, k);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
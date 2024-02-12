#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int arr[n];
    int arr2[n-1];

    int count=0;
    int m=1000;

    cin>>arr[0];

    for(int i=1; i<n; i++){

        cin>>arr[i];
        arr2[i]=arr[i]-arr[i-1];
        count=max(arr2[i], count);
    }

    for(int i=2; i<n; i++){

        m=max(min(m,arr2[i]+arr2[i-1]),count);
    }

    cout<<m<<endl;
    
    return 0;
}
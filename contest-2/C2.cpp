#include<bits/stdc++.h>
using namespace std;

int main() {

    while(true){
        long long int n;
        cin>>n;

        if(n==0){
            break;
        }

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        for(int i=0; i<n; i++){
            cout<<arr[i];
            if(i<(n-1)){
            // cout<<arr[i];
                cout<<" ";
            }
        }
    
        cout<<endl;
    
    }
    
    return 0;
}
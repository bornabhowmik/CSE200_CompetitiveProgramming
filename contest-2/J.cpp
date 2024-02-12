#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while(t--){

        long long int n;
        cin>>n;

        n=n%1000000007;

        cout<<n%1000000007*n%1000000007<<endl;
    }

    return 0;
}
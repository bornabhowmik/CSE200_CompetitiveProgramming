#include<bits/stdc++.h>
using namespace std;

bool is_lucky(int x) {

    while(x>0) {
        int digit=x%10;
        if (digit !=4 && digit !=7)
        return false;
        x /=10;
    }
    return true;
}

int main() {
    int n;
    cin>>n;

    for (int i=1; i<=n; ++i) {
        if (n%i==0 && is_lucky(i)) {
            cout<<"YES"<<endl;
            return 0;
        }

        // else{
        //     cout<<"NO"<<endl;
        // }
    }
    cout<<"NO"<<endl;

    return 0;
}
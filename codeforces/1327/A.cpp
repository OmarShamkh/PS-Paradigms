#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k==1){
            if(n%2==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(n == k*k) cout<<"YES\n";
        else if( n < k*k) cout<<"NO\n";
        else if(n > k*k){
            if((n%2==0 && k%2 ==0) || (n%2==1 && k%2==1) ){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }


    return 0;
}

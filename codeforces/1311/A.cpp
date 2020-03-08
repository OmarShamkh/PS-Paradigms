#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b){
            if((a%2==0)&&(b%2==0) || (a%2==1)&&(b%2==1) ) cout<<1<<"\n";
            else cout<<2<<"\n";
        }
        else if(a<b){
            if((a%2==0)&&(b%2==0) || (a%2==1)&&(b%2==1) ) cout<<2<<"\n";
            else cout<<1<<"\n";
        }
        else cout<<0<<"\n";
    }
    return 0;
}

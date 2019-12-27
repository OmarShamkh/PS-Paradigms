#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,r,g,b;
    cin>>t;
    while(t--){
        cin>>r>>g>>b;// 3 3 3
        long long ma = max(r,max(g,b));//3
        if(ma >(r+g+b-ma+1)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long q,a,b,n,s;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>a>>b>>n>>s;// 5 2 6 27
        if(s %n <=b && a*n +b >=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

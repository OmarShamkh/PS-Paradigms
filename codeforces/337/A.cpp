#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    int a[m], ans=1000;
    for(int i=0; i<m; i++) cin>>a[i];
    sort(a,a+m); 
    for(int i=0; i+n<=m; i++) ans=min(ans,a[i+n-1]-a[i]);
    cout<<ans;

    return 0;
}

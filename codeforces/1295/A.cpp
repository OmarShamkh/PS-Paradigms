#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        if(n%2 ==0)
        {
            n/=2;
            for (int i=1;i<=n;i++) cout<<1;
        }
        else
        {
            cout<<7;
            n=(n-3)/2;
            for (int i=1;i<=n;i++) cout<<1;
        }

        cout<<endl;
    }

    return 0;
}

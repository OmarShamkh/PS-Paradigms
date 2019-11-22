#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x,d,cnt=0;
    cin>>n>>x;
    char c;
    for(int i=0; i<n; i++)
    {
        cin>>c>>d; // +5 -10 -20 +40 -20
        if(c=='+') x+=d;
        if(c=='-')
        {
            if(x< d) cnt++;
            else x-=d;
        }
    }
    cout<<x<<" "<<cnt<<endl;

    return 0;
}

#include <bits/stdc++.h>
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))

using namespace std;
map <string,string> mp;
int main()
{
    int n, m ;
    cin >> n >> m;
    string a, b;
    while(m--)
    {
        cin >> a >> b;
        mp[a] = b;
    }
    while(n--)
    {
        string c;
        cin >> c;
        if(c.length() <= mp[c].length()) cout << c << " ";
        else cout << mp[c] << " ";
    }

    return 0;
}

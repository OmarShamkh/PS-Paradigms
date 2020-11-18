#include <bits/stdc++.h>
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))

using namespace std;
void print_map(map<int,int> mp)
{
    map <int, int> ::iterator itr;
    for(itr =mp.begin(); itr != mp.end(); itr++)
    {
        cout  << itr->first << " " << itr->second << '\n';
    }
}

map <int,int> mp;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    //print_map(mp);
    map<int,int> ::iterator itr;
    for (auto it= ++mp.begin(),itr= mp.begin(); it!=mp.end(); ++it,++itr)
    {
        if(itr->second > it->second  )
        {
            cout << "Happy Alex" ;
            return 0;
        }
    }

    cout << "Poor Alex" ;
}

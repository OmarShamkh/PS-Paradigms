#include <bits/stdc++.h>
using namespace std;
int n;
map<string , bool> mp;
vector<string> v;

int main()
{
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    for(int i=v.size()-1; i>=0; i--){
        if(!mp[v[i]]){
            cout << v[i] << "\n";
            mp[v[i]] = true;
        }
    }

    return 0;
}

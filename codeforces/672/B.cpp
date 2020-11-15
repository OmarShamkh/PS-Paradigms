#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    string s;
    cin >> s;
    set<char> se;
    if(n > 26) cout << -1;
    else {
        for(int i=0; i<s.size(); i++) se.insert(s[i]);
        cout << n - se.size() ;
    }

    return 0;
}

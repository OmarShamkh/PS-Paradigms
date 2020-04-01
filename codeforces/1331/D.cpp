#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if ( s[s.size()-1] & 1) cout << 1;
    else cout << 0;
    return 0;
}

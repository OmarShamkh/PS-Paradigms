#include <bits/stdc++.h>
using namespace std;

int t, a, b, c;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == ')' || s[s.size() - 1] == '(' || s.size() % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
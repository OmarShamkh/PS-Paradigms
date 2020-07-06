#include <bits/stdc++.h>

using namespace std;

string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
    char ch, c;
    cin >> ch;
    while(cin >> c)
    {
        if( ch == 'R')
            cout << s[s.find(c)-1];
        else
            cout << s[s.find(c)+1];
    }
    cout << "\n";
    return 0;
}

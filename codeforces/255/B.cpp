#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int x =0, y = 0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'x') x++;
        else y++;
    }

    if(x>y)
    {
        x = x - y;

        for(int i=0; i<x; i++)
        {
            cout<<'x';
        }
        return 0;
    }

    if(y>x)
    {
        y = y - x;

        for(int i=0; i<y; i++)
        {
            cout<<'y';
        }
        return 0;
    }

}

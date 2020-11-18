#include <bits/stdc++.h>
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if( a != b){
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex" ;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a , b ;
        cin >> a >> b;
        if ( a % b == 0 || a == b) cout << 0 <<"\n";
        else if( a < b ) cout<< b-a <<"\n";
        else cout << b - (a % b) <<"\n";

    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int n , x , y , z , a , b , c;
int main()
{

    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    if( !a && !b && !c) cout << "YES";
    else cout << "NO";
    return 0;
}

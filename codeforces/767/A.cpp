#include <bits/stdc++.h>

using namespace std;
int n , m, a[100001];
int main()
{
    cin >> n;
    m = n;
    while(m--){
        int x;
        cin >> x;
        a[x] = 1;
        while(a[n]){
            cout << n << " ";
            n--;
        }
        cout << "\n";
    }
    return 0;
}

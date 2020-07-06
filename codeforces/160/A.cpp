#include <bits/stdc++.h>

using namespace std;
int n , cnt , sum , ans , a[101];
int main()
{
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i] , sum += a[i];
    sort(a, a+n);
    for(int i=n-1; i>=0; i--){
        cnt++;
        ans += a[i];
        if(ans > sum/2)  break;
    }
    cout << cnt;
    return 0;
}

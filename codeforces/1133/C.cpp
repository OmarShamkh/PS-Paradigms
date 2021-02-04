#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int N = 2e5 + 10;
int n , a[N];
bool ok(int x){
    for(int i=0; i+x-1 <n; i++){
        if(a[i+x-1] - a[i] <= 5) return true;
    }
    return false;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n ;
    for(int i =0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    int st = 1 , en = n , mid;
    while(st < en){
        int mid = st + (en-st+1) /2;
        if(ok(mid)) st = mid;
        else en = mid-1;
    }
    cout << st;
    return 0;
}
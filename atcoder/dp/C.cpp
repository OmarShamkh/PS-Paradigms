#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+10;
int n, a[N], b[N], c[N] , dp[3][N];
int solve(int idx, int prev){
    if(idx >= n) return 0;

    int &ret = dp[prev][idx];
    if(~ret) return ret;

    if(prev == 0){
        ret = max(solve(idx+1 , 1)+ a[idx] , solve(idx+1 , 2) + a[idx]);
    }
    if(prev == 1){
        ret = max(solve(idx+1 , 0)+ b[idx] , solve(idx+1 , 2) + b[idx]);
    }
    if(prev == 2){
        ret = max(solve(idx+1 , 1)+ c[idx] , solve(idx+1 , 0) + c[idx]);
    }
    return ret;
}
int main()
{
    INGZzz
    memset(dp,-1,sizeof dp);
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i];
    cout << max({solve(0,0) , solve(0,1) , solve(0,2)});
    return 0;
}
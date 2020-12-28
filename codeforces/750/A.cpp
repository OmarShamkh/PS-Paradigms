#include <bits/stdc++.h>
using namespace std;
int n, k;
bool solve(int x, int kk)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i * 5;
        if (sum > (240 - kk))
            return false;
    }
    //cout << sum << endl;
    return true;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> k;
    int st = 0, en = n - 1;
    int ans = 0;
    while (st <= en)
    {
        int mid = st + (en - st) / 2;
        if (solve(mid + 1, k))
        {
            ans = mid + 1;
            st = mid + 1;
        }
        else
            en = mid - 1;
    }

    cout << ans << endl;

    return 0;
}
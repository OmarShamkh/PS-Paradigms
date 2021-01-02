#include <bits/stdc++.h>
using namespace std;
long long n, s, res;
long long a[100001], b[100001];
bool solve(int k)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] + (i + 1) * 1LL * k;
    }
    sort(b, b + n);
    //for(int i=0; i<n; i++) cout << b[i] << " ";
    //cout<< "\n";
    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += b[i];
    }
    if (sum <= s)
    {
        res = sum;
        return true;
    }
    return false;
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int st = 0, en = n - 1, mid, ans = 0;
    while (st <= en)
    {
        mid = st + (en - st) / 2;
        if (solve(mid + 1))
        {
            ans = mid + 1;
            st = mid + 1;
        }
        else
        {
            en = mid - 1;
        }
    }
    cout << ans << " " << res << endl;
    return 0;
}
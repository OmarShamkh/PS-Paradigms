#include <bits/stdc++.h>
using namespace std;

int n, m, a[100001];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
        {
            a[i] += a[i - 1];
        }
    }

    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        int st = 0, en = n ;
        int ans = 0, mid;
        while (st < en)
        {
            mid = (st + en) / 2;
            if (q <= a[mid])
            {
                ans = mid;
                en = mid;
            }
            else
            {
                st = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                st.insert(a[j] - a[i]);
            }
        }
        cout << st.size() << "\n";
    }

    return 0;
}
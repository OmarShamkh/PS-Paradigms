#include <bits/stdc++.h>

using namespace std;
int n, v,cnt;

int main()
{
    cin >> n >> v;
    vector <int> ve;
    for(int i=0; i<n; i++)
    {
        int k, f =0;
        cin >> k;
        for(int j=0; j<k; j++)
        {
            int s;
            cin >> s;
            if(s < v && f ==0)
            {
                cnt++;
                f = 1;
                ve.push_back(i+1);

            }
        }
    }
    cout << cnt << "\n";
    sort(ve.begin(),ve.end());
    for(auto x : ve) cout << x << " ";
    return 0;
}

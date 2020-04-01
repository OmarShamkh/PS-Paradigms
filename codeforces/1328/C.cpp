#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        string s ;
        cin >> s;
        string ans1 , ans2;
        bool b = false;
        ans1 += '1';
        ans2 += '1';
        for(int i=1; i<n; i++){
            if(s[i] == '1'){
                if(b) ans1 +='0' , ans2 +='1';
                else  b = true , ans1 +='1' , ans2 +='0';
            }
            else if(s[i] == '2'){
                if(b) ans1 +='0' , ans2 +='2';
                else ans1 +='1' , ans2 +='1';
            }
            else ans1 +='0' , ans2 += '0';
        }
        cout << ans1 << "\n";
        cout << ans2 << "\n";

    }
    return 0;
}

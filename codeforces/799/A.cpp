#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , t, k ,d;
    cin>>n>>t>>k>>d;
    int T = n/k;
    if(n%k !=0){
        T++;
    }
    T = T * t ;
    if(T-d >t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main(){

int n , b ,d , a[100005], sum=0 , c =0;
cin>> n >> b >> d ;
for(int i=0;i<n;i++){
   cin>>a[i];
   if(a[i]<=b){
    sum+=a[i];
    if(sum>d){
    c++;
    sum =0;
    }

   }
}
cout<<c;




    return 0;
}
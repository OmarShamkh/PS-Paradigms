#include <iostream>

using namespace std;

int main()
{
    int n , h ,a , c=0; // 3 7  4  5  14
    
    cin>>n>>h;
    for(int i=0; i<n;i++){
        cin>>a;
        if(a > h){
           c+=2;
        } else {
            c++;
        }
        
    }
    cout<<c;
    return 0;
}
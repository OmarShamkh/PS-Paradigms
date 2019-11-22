#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    set<char>st;
    getline(cin,s);
    int i=1;
    while(i<s.size()-1)
    {
        if(s[i]==' ' || s[i] == ',' ){
            i++;
            continue;
        }
        st.insert(s[i]);
        i++;
    }
    cout<<st.size()<<endl;
    return 0;
}

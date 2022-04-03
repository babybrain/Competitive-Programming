#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
    cin>>T;
    while(T--){
            int N,Q;
    cin>>N>>Q;
        string s;
        cin>>s;
        int mxc=0,c=0;
        for(int i=0;i<s.length();i++)
        {
            if (s[i]=='*')
                c++;
            else
            {
                mxc=max(mxc,c);
                c=0;
            }
        }
        mxc=max(mxc,c);
        if (mxc>=Q)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,n,q;
    cin>>T;
    string s,ans;
        
    while(T--)
    {
        cin>>n>>q;
        cin>>s;
        ans=s;
        int k=q-1;
        for (int i=0,j=q-1;i<=j;)
        {
            if(i==j)
                ans[k--]=s[i++];
            else{
                ans[k--]=s[i++];
                ans[k--]=s[j--];
            }
        }
        cout<<ans<<endl;

    }
}
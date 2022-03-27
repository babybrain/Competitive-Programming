#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s1,s2;
        cin>>s1>>s2;
        map<char,int> m;
        int ans=0;
        for(int i=0;i<s1.length();i++)
        {
            m[s1[i]]=i+1;
        }
        for(int i=1;i<s2.length();i++)
        {
            ans+=abs(m[s2[i]]-m[s2[i-1]]);
        }
        cout<<ans<<endl;
    }
}

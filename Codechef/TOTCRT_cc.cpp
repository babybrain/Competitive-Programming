#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        map<string,int> m;
        string s;
        int c;
        for(int i=0;i<3*N;i++)
        {
            cin>>s>>c;
            m[s]+=c;
        }
        map<string,int>::iterator it;
        vector<int> v;
        for(it=m.begin();it!=m.end();it++)
            v.push_back(it->second);
        sort(v.begin(),v.end());
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}
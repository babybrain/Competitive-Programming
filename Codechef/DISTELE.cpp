#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 1000000007
#define pb push_back


int main(){
    int T;
    cin>>T;
    while(T--)
    {
        unordered_map<ll,ll> mp;
        int N,x;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>x;
            mp[x]++;
        }
        ll ans=1;
        unordered_map<ll,ll>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            ans=((ans%MAX)*(1+it->second)%MAX)%MAX;
        }
        ans--;
        cout<<ans<<endl;
    } 
}
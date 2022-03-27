#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main(){
    ll t,a,b,c,d,ans1,ans2;
    cin>>t;
    while(t--)
    {
        ans1=-1,ans2=-1;
        cin>>a>>b>>c>>d;
        vector<ll> v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        v.pb(d);
        sort(v.begin(),v.end());
        ll sum=v[2];
        ll mul=v[3];
        for(int i=1;i<=10000;i++)
        {
            if((sum+mul-i)%(i+1)==0)
            {
                ll y=i;
                ll x=(sum+mul-i)/(i+1);
                if(((x-y)==v[0]&&(x/y)==v[1])||((x-y)==v[1]&&(x/y)==v[0]))
                    {
                        ans1=x;
                        ans2=y;
                    }
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}
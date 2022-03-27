#include<bits/stdc++.h>
#define MAX 2e18
#define ll long long
#define pb push_back
using namespace std;
int main(){
    vector<string> powtwo;
    ll a=1;
    while(a<=MAX)
    {
        powtwo.pb(to_string(a));
        a=a<<1;
    }
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        ll ans=INT_MAX;
        ll inp_size=s.length();
        for(auto x:powtwo)
        {
            ll x_size=x.length();
            ll taken=0,i=0,j=0;
            while(i<inp_size && j<x_size)
            {
                if(s[i]==x[j])
                {
                    taken++;
                    j++;
                }
                i++;
            }
            ans=min(ans,inp_size+x_size-(2*taken));
        }
        cout<<ans<<endl;
    }
}
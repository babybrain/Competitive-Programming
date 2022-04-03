#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 500006
void preCompute(vector< vector<ll> >& pre){

    for(ll i=1;i<MAX;i++){
        for(ll j=i;j<MAX;j+=i){
            pre[j].push_back(i);
        }
    }

}

int main(){
    vector< vector<ll> > pre(MAX);
    preCompute(pre);
    ll T;
    cin>>T;
    while(T--){
        ll N,M;
        ll res=0;
        cin>>N>>M;
        for(ll b=2;b<=N;b++){
            ll x=(M-(M%b));
            if(b>M)
                res+=(b-1);
            else{
            ll l=0,r=pre[x].size()-1;
            while(l<=r){
                    ll mid=(l+r)/2;
                if(b>pre[x][mid])
                    l=mid+1;
                else
                    r=mid-1;
            }
            res+=l;
            }


        }
        cout<<res<<endl;
    }
}

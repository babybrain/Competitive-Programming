#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10000007

ll calPow(ll val,ll base){
    ll ans=1;
    while(base>0)
    {
        if((base%2)==1)
        {
            ans=((ans%MOD)*(val%MOD))%MOD;
        }
        val=((val%MOD)*(val%MOD))%MOD;
        base=base/2;
    }
    return ans;
}

ll calS(ll n,ll k){
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans=((ans%MOD)+(calPow(i,k)%MOD))%MOD;
    }
    return ans%MOD;
}

ll calP(ll n,ll k){
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans=((ans%MOD)+(calPow(i,i)%MOD))%MOD;
    }
    return ans%MOD;
}

ll calZ(ll n,ll k){
    ll s=calS(n,k);
    ll p=calP(n,k);
    return ((s%MOD)+(p%MOD))%MOD;
}

int main(){
    while(1){
        ll n,k;
        cin>>n>>k;
        if (n==0 && k==0){
            break;
        }
        ll ans=((calPow(n,k)%MOD)+(calPow(n,n)%MOD)+((2*calPow(n-1,k))%MOD)+((2*calPow(n-1,n-1))%MOD))%MOD;
        cout<<ans%MOD<<endl;
    }
}

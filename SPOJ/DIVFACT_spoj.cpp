#include<bits/stdc++.h>
using namespace std;
#define MAX 50005
#define ll long long
#define pb push_back
#define MOD 1000000007
vector<int> sieveCal(vector<bool>& sieve){
    vector<int> primes;
    sieve[0]=false;
    sieve[1]=false;
    for(int i=2;i<=sqrt(MAX);i++){
        if (sieve[i]){
        for(int j=i*i;j<MAX;j+=i){
         sieve[j]=false;
        }
        }
    }
    for(int i=0;i<MAX;i++){
        if(sieve[i])
            primes.pb(i);
    }
    return primes;
}

ll calPow(ll val,ll primeNo){
    ll x=primeNo;
    ll co=0;
    while(val>=x){
        co+=(val/x);
        x=x*primeNo;
    }
    return co;
}
int main(){
    vector<bool> sieve(MAX,true);
    vector<int> primes=sieveCal(sieve);
    int T;
    cin>>T;
    while(T--){
        int val;
        cin>>val;
        ll ans=1;
        for(ll i=0;i<primes.size()&&primes[i]<=val;i++){
            ll cPow=calPow(val,primes[i]);
            if(cPow!=0)
                {
                    cPow++;
                    ans=(ans%MOD*cPow%MOD)%MOD;
                }
        }
        ans=ans%MOD;
        cout<<ans<<endl;
}
}

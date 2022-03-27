#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll calGCD(ll a,ll b){
    if(b==0)
        return a;
    return calGCD(b,a%b);
}
int main(){

    ll T;
    cin>>T;
    while(T--){
        ll N,M;
        cin>>N>>M;
        vector<ll> v(N);
        for(ll i=0;i<N;i++){
            cin>>v[i];
        }
        ll gcd=v[0];
        for(ll i=1;i<N;i++){
            gcd=calGCD(gcd,v[i]);
        }
        ll prime=1;
        for(ll i=2;i<=sqrt(gcd);i++){
            while(gcd%i==0){
                    gcd=gcd/i;
                prime=max(prime,i);
            }
        }
        prime=max(prime,gcd);
        if (prime<=M){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}

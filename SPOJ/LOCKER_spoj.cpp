#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007



int main(){
    int T;
    cin>>T;
    while(T--){
        ll n,ans;
        cin>>n;
        if(n%2==0){
            ans=(((n/2)%MOD)*((n/2)%MOD))%MOD;
        }
        else{
            ans=(((n/2)%MOD)*(((n/2)+1)%MOD))%MOD;
        }
        if(n==1||n==2){
            cout<<n<<endl;
        }
        else{
            cout<<ans%MOD<<endl;
        }
    }
}

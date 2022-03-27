#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) {
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2;
    }
    return result;
}

long long calcPow(long long x){
long long pow=1;

for(long long i=1;i<=x-1;i++){
    pow=((pow%MOD)*(2%MOD))%MOD;
}
return pow;

}

int main(){
    int N;
    cin>>N;
    while(N--){
        long long x;
        cin>>x;

        cout<<fast_power(2,x-1)<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define MAX 1000000

void filterSieve(vector<int>& sieve){
    for(int i=2;i<=sqrt(MAX);i++){
        if(sieve[i]==1){
        for(int j=i*i;j<=MAX;j+=i){
         sieve[j]=0;
        }
        }
    }
}

int main(){
    vector<int> sieve(MAX+1,1);
    sieve[0]=sieve[1]=0;
    filterSieve(sieve);
    int T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        long double val=sqrt(N);
        if (val==(ll)sqrt(N)){
        if(sieve[sqrt(N)]==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }}
        else{
            cout<<"NO\n";        }
    }

}

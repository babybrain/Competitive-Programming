#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define MAX_SIZE 10000001




void calSieve(vector<int>& sieve){
    vector<int> prime;
    for(int i=2;i<=MAX_SIZE;i++){
        if (sieve[i]==i){
            for(int j=i*2;j<=MAX_SIZE;j+=i){
                sieve[j]=i;
            }
        }
    }
}


long long calPow(long long a,long long b){
    a=1LL*a;
    b=1LL*b;
    a=a%MOD;
    long long temp=1;
    while(b>0){
        if(b%2==1){
            temp=(1LL*a*temp)%MOD;
        }
        a=(1LL*a*a)%MOD;
        b=b/2;
    }
    return (1LL*temp)%MOD;
}


int main(){
    vector<int> sieve(MAX_SIZE+1,1);
    for(int i=0;i<=MAX_SIZE;i++){
        sieve[i]=i;
    }
    vector<int> val(MAX_SIZE+1,INT_MAX);
    vector<int> totCount(MAX_SIZE+1,0);
    calSieve(sieve);
    //cout<<sieve[12];
    int T;
    cin>>T;
    long long ans=1;
    int TT=T;
    int mn=INT_MAX;
    int mx=INT_MIN;
    while(T--){
        int N,x;
        cin>>N;
        map<int,int> mDiv;
        for(int i=0;i<N;i++){
            cin>>x;
            while(x>1){
                mDiv[sieve[x]]++;
                mn=min(mn,sieve[x]);
                mx=max(mx,sieve[x]);
                x=x/sieve[x];
            }
            /*
            for(int i=0;primeList[i]<=sqrt(x);i++){
                while(x%primeList[i]==0){
                    mDiv[primeList[i]]++;
                    totCount[primeList[i]]++;
                    x=x/primeList[i];
                    mn=min(mn,primeList[i]);
                    mx=max(mx,primeList[i]);
                }

            }
            if(x!=1)
                {totCount[x]++;
                    mDiv[x]++;
                    mn=min(mn,x);
                    mx=max(mx,x);
                }*/

            }
            for(map<int,int>::iterator itr=mDiv.begin();itr!=mDiv.end();itr++){
                val[itr->first]=min(itr->second,val[itr->first]);
                totCount[itr->first]++;

                //cout<<itr->first<<" "<<itr->second<<" "<<val[itr->first]<<endl;

            }
        }
    //cout<<mn<<" "<<mx<<endl;
    for(int i=2;i<=MAX_SIZE;i++){
            //cout<<i<<" "<<val[i]<<" "<<totCount[i]<<endl;
            if(totCount[i]==TT){
                    ans=(1LL*ans*calPow(i,val[i]))%MOD;

            }
        }
    cout<<ans<<endl;
}

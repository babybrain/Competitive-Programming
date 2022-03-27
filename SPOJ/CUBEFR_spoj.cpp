#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
#define pb push_back

void sieveCal(vector<int>& sieve){
    for(int i=2;(i*i*i)<=MAX;i++){
        long long val=i*i*i;
        if(sieve[i]==1){
        for(int j=val;j<=MAX;j+=val){
            sieve[j]=-1;
        }
        }
    }
    int counter=1;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]==1)
            {sieve[i]=counter;
            counter++;
            }
    }
}

int main(){
vector<int> sieve(MAX+1,1);
sieve[0]=-1;
sieveCal(sieve);

int T,x;
cin>>T;
for(int i=0;i<T;i++){
cin>>x;
if(sieve[x]!=-1)
    cout<<"Case "<<(i+1)<<": "<<sieve[x]<<endl;
else
    cout<<"Case "<<(i+1)<<": Not Cube Free\n";
}



}

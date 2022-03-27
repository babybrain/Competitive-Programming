#include<bits/stdc++.h>
using namespace std;

#define vi vector
#define ll long long

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        vi<ll> v(N+1,0);
       for(int i=1;i<=N;i++){
        cin>>v[i];
        }
        ll m1=v[(N/2)+1];
        ll m2=v[(N+1)/2];
        ll dist1=0;
        ll dist2=0;
        ll m1l=m1-(M/2);
        ll m1r=m1+((M-1)/2);
        ll m2l=m1-(M/2);
        ll m2r=m1+((M-1)/2);
        for(int i=1;i<=N;i++){
            dist1+=max(abs(m1l-v[i]),abs(m1r-v[i]));
            dist2+=max(abs(m2l-v[i]),abs(m2r-v[i]));
        }
        cout<<min(dist1,dist2)<<endl;
}
}

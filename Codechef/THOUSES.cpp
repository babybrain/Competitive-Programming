#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N,X,u,v;
        cin>>N>>X;
        vector<long long> vec(N,0);
        vector<long long> nodeVal(N,0);
        vector<long long> parent(N);
        nodeVal[0]=X;
        for(long long i=0;i<(N-1);i++){
            cin>>u>>v;
            long long mn=min(u,v);
            long long mx=max(u,v);
            parent[mx-1]=mn-1;
            vec[mn-1]++;
        }
        for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
        cout<<endl;
        for(int i=0;i<parent.size();i++)
            cout<<parent[i]<<" ";
        cout<<endl;
        long long sum=X;
        for(long long i=1;i<N;i++){
            if(nodeVal[i]==0){
            long long val=nodeVal[parent[i]];
             for(long long j=1;j<=vec[i-1];j++){
                nodeVal[j]=((val%MOD)*(j%MOD))%MOD;
                sum=((sum%MOD)+(nodeVal[j]%MOD));
             }
            }
        }
        cout<<sum<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,val;
        cin>>n>>val;
        vector<int> price(n);
        vector<int> cb(n);
        vector<pair<long long,long long>> net_price;
        for(int i=0;i<n;i++)
            cin>>price[i];
        for(int j=0;j<n;j++)
            cin>>cb[j];
        for(int i=0;i<n;i++)
            net_price.push_back(make_pair(price[i]-cb[i],cb[i]));
        sort(net_price.begin(),net_price.end());
        long long total_count=0;
        for(auto i:net_price)
            {
                if(val>=i.first){
                long long temp_count=((val-i.second)/i.first);
                val=val-(temp_count*i.first);
                total_count+=temp_count;
                }
            }
            cout<<total_count<<endl;

        
    }
}
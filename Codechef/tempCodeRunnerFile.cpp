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
        vector<pair<int,pair<int,int>>> net_price;
        for(int i=0;i<n;i++)
            cin>>price[i];
        for(int j=0;j<n;j++)
            cin>>cb[j];
        for(int i=0;i<n;i++)
            net_price.push_back(make_pair(price[i]-cb[i],make_pair(price[i],cb[i])));
        
        int total_count=0;
        for(auto i:net_price)
            {
                if(val>=i.second.first){
                int temp_count=val/i.second.first;
                total_count+=temp_count;
                val=val-(temp_count*i.second.first);
                }
                if(val>=i.second.second){
                val=val+(temp_count*i.second.second);
                
                temp_count=(val/i.second.first);
                val=val-(temp_count*i.second.second);
                total_count+=temp_count;
                }
            }
            cout<<total_count<<endl;

        
    }
}
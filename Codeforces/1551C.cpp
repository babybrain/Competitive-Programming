#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    map<int,vector<int>> m;
    while(T--){
        int N,K,x,color=0;
        cin>>N>>K;
        m.clear();
        vector<int> result(N);
        for(int i=0;i<N;i++){
            cin>>x;
            result[i]=0;
            //vector<int> temp=m[x];
            if (m[x].size()<K)
                m[x].push_back(i);
        }
        int groups=0;
        for(auto i:m)
            groups+=i.second.size();
        groups=(groups/K)*K;
        //cout<<groups<<endl;
        for (auto i:m){
                //cout<<i.first<<" "<<groups<<endl;
                    for(int j=0;j<i.second.size();j++)
                        {
                            result[i.second[j]]=color+1;
                            color++;
                            color=color%K;
                            groups--;
                            if(groups==0)
                                break;

                        }
                        if(groups==0)
                            break;
                        //cout<<endl;
        }
        //cout<<groups<<endl;
        for(int i=0;i<N;i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> v(N);
        for(int i=0;i<N;i++){
            cin>>v[i];
        }
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<N;i++){
            int t=v[i-1]^ans[i-1];
            ans.push_back((t|v[i])^v[i]);
        }
        for(int i=0;i<N;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> v(N);
        for (size_t i = 0; i < N; i++)
        {
            /* code */
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=v[0];
        for(int i=1;i<N;i++)
        {
            ans=max(ans,v[i]-v[i-1]);
        }
        cout<<ans<<endl;
    }
}
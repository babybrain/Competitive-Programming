#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,mx_val,smx_val,mn_val;
    cin>>T;
    while(T--)
    {
        mx_val=0;
        smx_val=-1;
        mn_val=0;
        cin>>N;
        vector<long long> v(N);
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
            if(v[mn_val]>v[i])
                mn_val=i;
            if(v[mx_val]<v[i])
                mx_val=i;
        }
        for(int i=0;i<N;i++)
        {
            if(i!=mx_val && v[i]==v[mx_val])
            {
                smx_val=i;
            }
            else if(v[i]<v[mx_val])
            {
                if(smx_val==-1 || v[smx_val]<v[i])
                    smx_val=i;
            }
        }
        cout<<v[mx_val]<<" "<<v[mn_val]<<" "<<v[smx_val]<<endl;
        long long ans=(v[mx_val]-v[mn_val])*v[smx_val];
        cout<<ans<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
#define ll long long
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        ll N,x;
        cin>>N;
        x=N;
        ll digs=0;
        ll nos=0;

        while(N>0)
        {
            if(N&1)
                nos++;
            N=N>>1;
            digs++;
        }
        if(x<=2)
            cout<<x<<endl;
        else
        {
            ll ans=1;
            for(int i=1;i<=digs;i++)
            {
                ans=((ans%MAX)*(2%MAX))%MAX;
            }
            if(nos==1)
                cout<<ans-1<<endl;
            else
                cout<<ans<<endl;

        }
    }    
}
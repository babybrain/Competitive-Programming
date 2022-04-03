#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector
#define pb push_back
#define mp make_pair
#define MOD 1000000007
int main(){

    int N,K;
    cin>>N>>K;
    vi<ll> v(N),res(N,1);
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    stack<ll> st;
    for(int i=0;i<N;i++){
        if(st.empty())
            st.push(i);
        else{
            if(v[st.top()]<=v[i]){
                st.push(i);
            }
            else{
                while((!st.empty()) && v[i]<v[st.top()]){
                    int pos=st.top();
                    res[st.top()]=i-st.top()+1;
                    st.pop();
                }
                st.push(i);
            }
        }
    }
    ll ans=1;
    for(int i=0;i<res.size();i++){
        //cout<<res[i]<<" ";
        //ll prod=(res[i]-i)+1;
        ans=((ans%MOD)*(res[i]%MOD))%MOD;
    }
    //cout<<endl;
    cout<<ans;
}

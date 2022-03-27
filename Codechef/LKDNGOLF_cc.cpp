#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    while(N--){
        long long n,x,k;
        cin>>n>>x>>k;
        bool check=false;
        if(x%k==0)
            check=true;
        if((x-n-1)%k==0)
            check=true;
        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

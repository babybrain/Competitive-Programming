#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
int main(){
    int T;
    cin>>T;
    while(T--){
        int D,d,P,Q;
        cin>>D>>d>>P>>Q;
        ll sum=P*d;
        ll n=D/d;
        sum=sum+((n-1)*P*d);
        sum=sum+(((n*(n-1))/2)*Q*d);
        sum=sum+((P+(n*Q))*(D%d));
        cout<<sum<<endl;

    }
}

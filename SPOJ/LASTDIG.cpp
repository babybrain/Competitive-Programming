#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
vector<int> v(10,0);
v[0]=0;
v[1]=1;
v[2]=4;
v[3]=4;
v[4]=2;
v[5]=1;
v[6]=1;
v[7]=4;
v[8]=4;
v[9]=2;
int T;
cin>>T;
while(T--){
    ll a,b;
    cin>>a>>b;
    if (b!=0){
    ll val=a%10;
    ll cycle=v[val];
    if(cycle==0){
        cout<<0<<endl;
    }
    else{
    ll rem=b%cycle;
    if(rem==0)
        rem=cycle;
    val=pow(val,rem);
    cout<<val%10<<endl;
    }
    }

    else{
        cout<<1<<endl;
    }

}
}

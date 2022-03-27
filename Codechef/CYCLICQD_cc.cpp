#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back

int main(){
int T;
cin>>T;
while(T--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(((a+c)==180)&&((b+d)==180))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
}

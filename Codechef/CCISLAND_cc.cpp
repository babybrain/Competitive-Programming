#include<iostream>
using namespace std;
int main(){
        int T;
    cin>>T;
    while(T--){
    int x,y,a,b,d;
    cin>>x>>y>>a>>b>>d;
    if(((d*a)<=x)&&((d*b)<=y)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    }
}

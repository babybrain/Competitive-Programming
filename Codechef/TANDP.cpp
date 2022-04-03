#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m,x,y,a,b;
        cin>>n>>m>>x>>y>>a>>b;
        int tmove,pmove;
        tmove=(n-x)+(m-y);
        pmove=(n-a)+(m-b)-min(n-a,m-b);
        if(pmove<tmove){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}

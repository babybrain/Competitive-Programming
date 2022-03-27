#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
            int xa,ya,xb,yb,xf,yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        long long d1;
        if(xa==xb){
            d1=ya-yb;
            if(xa==xf){
                if((yf>ya && yf<yb)||(yf>yb && yf<ya))
                    d1=abs(d1)+2;
            }
            cout<<abs(d1)<<endl;
        }
        else if(ya==yb){
            d1=xa-xb;
            if(ya==yf){
                if((xf>xa && xf<xb)||(xf>xb && xf<xa))
                    d1=abs(d1)+2;
            }
            cout<<abs(d1)<<endl;

        }
        else{
            cout<<abs(xa-xb)+abs(ya-yb)<<endl;
        }
}
}

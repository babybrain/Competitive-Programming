#include<bits/stdc++.h>
using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    int a,b,c;
    cin>>a>>b>>c;
    int n1=floor((a+1)/2);
    int n2=floor(a/2);
    int t1=180+(n1*2);
    int t2=180+(n2*2);
    t1=t1-b;
    t2=t2-b;
    cout<<t1+t2<<endl;
}

}

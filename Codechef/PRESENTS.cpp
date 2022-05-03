#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long x;
        cin>>x;
        long long val=(x/5)*4;
        val+=x%5;
        cout<<val<<endl;
    }
}
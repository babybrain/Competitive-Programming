#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        long long sum=0,curr;
        long long prev=k+1;
        long long d=3;
        long long checkd=3;
        for(int i=1;i<((2*k)+1);i++){
            curr=prev+d;
            sum+=__gcd(prev,curr);
            prev=curr;
            d+=2;
        }
        cout<<sum<<endl;
    }
}

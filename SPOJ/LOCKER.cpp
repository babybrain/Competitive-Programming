#include<iostream>
using namespace std;

const long long mod=1000000007;

long long solve(long long base,long long exp){
    if(exp==0)
        return 1;
    if(exp==1)
        return base%mod;
    long long res=solve(base,exp/2);
    if(exp%2)
        return ((base%mod)*(res%mod)*(res%mod))%mod;
    else
        return ((res%mod)*(res%mod))%mod;

}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n,n1;
        cin>>n;
        if(n>1)
        {
        if(n%3==0)
            cout<<solve(3,n/3)%mod<<endl;
        else if(n%3==1)
            {
                n1=(n-4)/3;
                cout<<(4*solve(3,n1))%mod<<endl;
            }
        else{
            n1=(n-2)/3;
            cout<<(2*solve(3,n1))%mod<<endl;
        }
        }
        else
            cout<<1<<endl;
    }
}
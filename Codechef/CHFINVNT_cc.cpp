#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T;
    cin>>T;
    while(T--){
            ll N,p,K;
            cin>>N>>p>>K;
            if (K==1 || K>=N)
                cout<<p+1<<endl;

            else{

                    ll temp=p%K;
                    ll tDays=max(N/K,(N-1)/K);
                    ll left;

                    ll check=0;
                    if(N%K!=0)
                        {
                            left=(N-1)-(tDays*K);
                            tDays++;
                        }
                    else
                        left=(N-1)-(tDays-1)*K;
                    ll days=min(temp,left+1)*tDays;
                    if(N%K!=0)
                        days+=max(temp-left-1,check)*(tDays-1);
                    else
                        days+=max(temp-left,check)*tDays;
                    if(temp==0)
                        cout<<(p/K)+1<<endl;
                    else
                    {
                        ll step=(p-temp+K)/K;
                        cout<<days+step<<endl;
            }
    }
}
}

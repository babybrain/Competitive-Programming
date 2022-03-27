#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll count_digits(ll val)
{
    vector<int> v(10,0);
    ll samp_val=val,c=0;

    while(samp_val>0)
    {
        if(v[samp_val%10]==0)
            c++;
        v[samp_val%10]++;
        samp_val=samp_val/10;
    }
    return c;
}

int main(){
int T;
cin>>T;
while(T--)
{
    ll n,k;
    cin>>n>>k;
    bool check=true;
    while(check)
    {
        if(count_digits(n)<=k)
            check=false;
        else
            n++;
    }
    cout<<n<<endl;
}

}
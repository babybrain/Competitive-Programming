#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n,m;
        cin>>n>>m;
        ll zeros=n-m;
        ll part=zeros/(m+1);
        ll extras=zeros%(m+1);
        cout<<extras*(((part+1)*(part+2))/2)+((m+1-extras)*((part*(part+1))/2))<<endl;
    }
}
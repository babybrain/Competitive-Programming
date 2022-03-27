#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());

    int mx=2*max(v[0],l-v[n-1]);
    
    for(int i=1;i<n;i++)
    {
        mx=max(mx,v[i]-v[i-1]);
    }
    
    cout<<fixed<<setprecision(10)<<mx/2.0<<endl;

}
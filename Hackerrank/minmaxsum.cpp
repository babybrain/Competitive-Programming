#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	unsigned ll sum1=0;
	unsigned ll sum2=0;
	ll x;
	ll mn=INT_MAX,mx=INT_MIN;
	for(ll i=0;i<5;i++)
	{
		cin>>x;
		sum1+=x;
		sum2+=x;
		mn=min(mn,x);
		mx=max(mx,x);
	}
	cout<<sum2-mx<<" "<<sum1-mn;
	
}

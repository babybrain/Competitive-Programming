#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define vi vector
int main()
{
	ll n,m;
	cin>>n>>m;
	vi<ll> v1(n);
	vi<ll> v2(m);
	
	ll c1=0,c2=0;
	for(ll i=0;i<n;i++)
	{
		cin>>v1[i];
		if(v1[i]%2)
		c1++;
	}
	for(ll i=0;i<m;i++)
	{
		cin>>v2[i];
		if(v2[i]%2)
		c2++;
	}
	ll ans=min(c2,n-c1);
	n-=ans;
	ans=ans+min(c1,m-c2);
	cout<<ans;
	
}

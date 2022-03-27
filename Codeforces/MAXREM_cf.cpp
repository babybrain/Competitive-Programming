#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mp amke_pair
#define pb push_back
#define vi vector
int main()
{
	ll T;
	cin>>T;
	vi<ll> v(T);
	ll mx=INT_MIN;
	for(ll i=0;i<T;i++)
	{
		cin>>v[i];
		mx=max(mx,v[i]);
	}
	ll mx1=INT_MIN;
	for(ll i=0;i<T;i++)
	{
		if(v[i]!=mx)
		mx1=max(mx1,v[i]);
		
	}
	if(mx1==INT_MIN)
	mx1=0;
	cout<<mx1;
}

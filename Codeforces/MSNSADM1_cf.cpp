#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector
#define mp make_pair
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;
		vi<ll> v1(N),v2(N);
		for(ll i=0;i<N;i++)
		{
			cin>>v1[i];
		}
		for(ll i=0;i<N;i++)
		{
			cin>>v2[i];
		}
		ll mx=0;
		for(ll i=0;i<N;i++)
		{
			ll goal=v1[i]*20;
			ll foul=v2[i]*(-10);
			mx=max(mx,goal+foul);
		}
		cout<<mx<<endl;
	}
}

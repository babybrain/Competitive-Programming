#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector
#define pb push_back
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N;
		cin>>N;		
		vi<ll> v1(N);
		vi<ll> v2(N);
		ll sum1=0,sum2=0;
		for(ll i=0;i<N;i++)
		{
			cin>>v1[i];
			sum1+=v1[i];
		}
		for(ll i=0;i<N;i++)
		{
			cin>>v2[i];
			sum2+=v2[i];
		}
ll ans=sum1;
ll temp=0;
for(ll i=0;i<N;i++)
{
	sum1-=v1[i];
	temp+=v1[i];
	sum2-=v2[i];
	ans=max(ans,temp+sum2);
}
cout<<ans<<endl;
	}
}

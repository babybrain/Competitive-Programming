#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define vi vector
#define pb push_back
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		string s;
		vi<ll> v(6,0);
		for(ll i=0;i<n;i++)
		{
			cin>>s;
			for(ll j=0;j<s.length();j++)
			{
				if(s[j]=='c')
				v[0]++;
				if(s[j]=='o')
				v[1]++;
				if(s[j]=='d')
				v[2]++;
				if(s[j]=='e')
				v[3]++;
				if(s[j]=='h')
				v[4]++;
				if(s[j]=='f')
				v[5]++;
			}
		}
		v[0]=v[0]/2;
		v[3]=v[3]/2;
		ll mn=INT_MAX;
		for(ll i=0;i<6;i++)
		{
			mn=min(mn,v[i]);
		}
		cout<<mn<<endl;
	}
}

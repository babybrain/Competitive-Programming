#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define vi vector
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		string s;
		char ch;
		cin>>n>>s>>ch;
		ll tot=(n*(n+1))/2;
		ll c=0,cou=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]!=ch)
			c++;
			else
			{
				tot=tot-((c*(c+1))/2);
				c=0;
			}
		}
		tot=tot-((c*(c+1))/2);
				cout<<tot<<endl;
		
	}
}

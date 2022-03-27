#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define vi vector
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll c1=a/c;
	ll c2=b/c;
	ll t=c1+c2;
	ll tot=(a+b)/c;
	ll giv=0;
	if(a>b)
	{
		ll val=a%c;
		ll diff=c-val;
		a+=diff;
		b-=diff;
		if(((a/c)+(b/c))>t)
		{
			t=(a/c)+(b/c);
			giv=diff;
		}
	}
	else
	{
		
		ll val=b%c;
		ll diff=c-val;
		a-=diff;
		b+=diff;
		if(((a/c)+(b/c))>t)
		{
			t=(a/c)+(b/c);
			giv=diff;
		}
	}
	cout<<t<<" "<<giv<<endl;
}

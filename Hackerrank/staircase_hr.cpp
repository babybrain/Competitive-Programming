#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector
#define pb push_back
#define popb pop_back
int main()
{
	ll T;
	cin>>T;
	for(ll i=0;i<T;i++)
	{
		for(ll j=i;j<(T-1);j++)
		cout<<" ";
		for(ll j=0;j<=i;j++)
		cout<<"#";
		cout<<endl;
	}
}

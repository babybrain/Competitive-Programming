#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector
int main()
{
	long double a,b,c;
	cin>>a>>b>>c;
	long double ans=ceil(a/c)*ceil(b/c);
	cout<<(long long)ans;
}

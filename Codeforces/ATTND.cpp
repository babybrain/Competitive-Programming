#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector
#define pb push_back
#define mp make_pair
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
       ll N;
       cin>>N;
       vi< pair<string,string> > v;
       string fname,lname;
       for(ll i=0;i<N;i++)
       {
		   cin>>fname>>lname;
		   v.pb(mp(fname,lname));
	   }
	   for(ll i=0;i<N;i++)
	   {
		   string s=v[i].first;
		   ll flag=0;
		   for(ll j=0;j<N;j++)
		   {
			   if((v[j].first==s)&&(j!=i))
			   {
				   flag=1;
				   break;
			   }
		   }
		   if(flag)
		   cout<<v[i].first<<" "<<v[i].second<<endl;
		   else
		   cout<<v[i].first<<endl;
		   
	   } 
	}
}

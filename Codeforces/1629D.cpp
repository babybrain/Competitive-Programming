#include<bits/stdc++.h>
using namespace std;

int palin_check(string base)
{
    for(int i=0,j=base.length()-1;i<j;i++,j--)
    {
        if(base[i]!=base[j])
        {
            return 0;
        }
    }
    return 1;
}
int solve(int i,vector<string>& s,int n,string base)
{
    if(i<n)
    {
        string temp=base+s[i];
        if(palin_check(temp))
            return 1;
        else
        {
            return (solve(i+1,s,n,base)||solve(i+1,s,n,temp)) ;
        }
    }
    return 0;
}

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0;i<n;i++)
            cin>>s[i];
        string base="";
        if(solve(0,s,n,base))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
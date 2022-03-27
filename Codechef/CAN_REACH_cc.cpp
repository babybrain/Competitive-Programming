#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,steps;
        cin>>x>>y>>steps;
        if(x%steps==0 && y%steps==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
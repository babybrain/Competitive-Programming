#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,X,Y;
    cin>>T;
    while(T--)
    {
        cin>>X>>Y;
        if (X==0)
        {
            if(Y%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(X%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

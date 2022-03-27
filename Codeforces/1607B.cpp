#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        long long x,n;
        cin>>x>>n;
        if(n%4==0)
        {
            cout<<x<<endl;
        }
        else if(n%4==1)
        {
            if(x%2==0)
                cout<<(-1*n)+x<<endl;
            else
                cout<<(n+x)<<endl;
        }
        else if(n%4==2)
        {
            if(x%2==0)
                cout<<x+1<<endl;
            else
                cout<<x-1<<endl;
        }
        else{
            if(x%2==0)
                cout<<x+n+1<<endl;
            else
                cout<<x-(n+1)<<endl;
        }

    }
}
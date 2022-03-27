#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int nod=(r-l+1)/2;
        if(l%2==1 && r%2==1)
            nod++;
        if(k==0)
        {
            if(l==r && l!=1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            if(k>=nod)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

    }
}
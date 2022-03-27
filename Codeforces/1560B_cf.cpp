#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,a,b,c;
    cin>>T;
    while(T--){
        cin>>a>>b>>c;
        int small=min(a,b);
        int large=max(a,b);
        int N=(large-small)*2;
        if((N%2==0) && a<=N && b<=N && c<=N)
        {
            if(c<=(N/2))
            {
                cout<<(N/2)+1+(c-1)<<endl;
            }
            else
            {
                cout<<c-(N/2)<<endl;

            }

        }
        else
            cout<<-1<<endl;
    }
}


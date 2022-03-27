#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x,r,c;
        cin>>x;
        r=sqrt(x);
        c=sqrt(x);
        int diff=x-(r*c);
        if(diff==0)
        {
            c=1;
            cout<<r<<" "<<c<<endl;
        }
        else
        {
            int mid=((r*c)-r+1);
            if(x==mid)
                cout<<r<<" "<<c<<endl;
            else if(x<mid)
            {
                r=r-(mid-x);
                cout<<r<<" "<<c<<endl;
            }
            else
            {
                int next=(r+1)*(c+1)-(r+1)+1;
                if(x<(r*r))
                    c=c-(x-mid);
                else if((x>(r*r)) && (x<next))
                {
                    c=c+1;
                    r=(r+1)-(next-x);
                }
                else
                {
                    r=r+1;
                    c=(c+1)-(x-next);
                }
                cout<<r<<" "<<c<<endl;

            }

        }
    }
}

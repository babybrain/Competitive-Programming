#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        vector<int> v(1001,0);
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int uncount=0;
        v[a]++;
        if (v[a]==1)
            uncount++;

        v[b]++;
        if (v[b]==1)
            uncount++;

        v[c]++;
        if (v[c]==1)
            uncount++;

        v[d]++;
        if (v[d]==1)
            uncount++;
        if (uncount==4 || uncount==3 || uncount==2)
        {if (uncount==2)
         {
             if (v[a]==2 && v[b]==2 && v[c]==2 && v[d]==2){
                cout<<2<<endl;
             }
             else
             {

                 cout<<1<<endl;
             }
        }
        else
            cout<<2<<endl;
        }
        else
            cout<<0<<endl;

    }
}

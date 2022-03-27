#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> v(N);
        int pos=0,mx=INT_MIN;
        bool check=true;
        map<int,int> m;
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
            m[v[i]]++;
            if(mx<v[i])
            {
                pos=i;
                mx=v[i];
            }
        }
        if(m.size()==1)
            cout<<0<<endl;
        else
        {
            if(pos==N-1)
                cout<<1<<endl;
            else
                cout<<2<<endl;

        }

    }
}
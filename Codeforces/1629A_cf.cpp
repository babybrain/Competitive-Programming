#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N,k,x;
        cin>>N>>k;
        map<int,int> m;
        vector<int> a(N),b(N),visited(N,-1);
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<N;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(a[j]<=k && visited[j]==-1)
                {
                    k+=b[j];
                    visited[j]=1;
                }
            }
        }
        cout<<k<<endl;

    }
}
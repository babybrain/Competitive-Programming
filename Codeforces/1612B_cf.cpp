#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
int T;
cin>>T;
while(T--)
{
    int N,a,b;
    cin>>N>>a>>b;
    vector<int> v(N+1,0);
    vector<int> ans(N,0);
    ans[0]=a;
    ans[N/2]=b;
    v[a]=1;
    v[b]=1;
    int k=1;
    bool check=true;
    for(int i=N;i>a && k<(N/2);i--)
    {
        if(i!=b)
            {
                ans[k]=i;
                v[i]=1;
                k++;
            }
    }
    if(k!=N/2)
        check=false;
    k++;
    for(int i=1;i<b && k<N;i++)
    {
        if(i!=a && v[i]==0)
            {
                ans[k]=i;
                k++;
            }
    }
    if(k==N && check==true)
    {
        for(int i=0;i<N;i++)
            cout<<ans[i]<<" ";
    }
    else
        cout<<-1;
    cout<<endl;
}
}
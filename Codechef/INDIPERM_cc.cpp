#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int ans[N];
        for(int i=0;i<N;i++)
        {
            ans[i]=i+1;
        }
        for(int i=1;i<N;i+=2)
        {
            int temp=ans[i-1];
            ans[i-1]=ans[i];
            ans[i]=temp;
        }
        if(N%2 && N>1)
            {
                int temp=ans[N-1];
                ans[N-1]=ans[N-2];
                ans[N-2]=temp;
            }
        for(int i=0;i<N;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
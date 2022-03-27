#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        long long ans=0;
        int N;
        cin>>N;
        vector<int> v(N);
        vector<int> count_num(MAX,0);
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
            
        }
        for(int i=1;i<=N;i++)
        {
            vector<int> count_num(MAX,0);
            for(int j=0,k=0;k<N;k++)
            {
                if((k-j+1)==i)
                {
                    for(int l=j;l<=k;l++)
                        count_num[v[l]]++;
                    for(int i=1;i<MAX;i++)
                    if(count_num[i]==i)
                    ans++;
                }
                else
                {
                    count_num[v[j]]--;
                    j++;
                }
            }
        }
        cout<<ans<<endl;
        


    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,k;
        cin>>N>>k;
        vector<int> v(N);
        for(int i=0;i<N;i++)
            cin>>v[i];
        int ans=INT_MAX;
        for(int i=1;i<=k;i++)
        {
            int ugliness=0,uans=INT_MIN;
            int j=0,l=1;
            while(l<v.size())
            {
                while(v[l]==i)
                    l++;
                if(l<v.size() && v[j]!=i)
                {
                    if(v[l]!=v[j])
                        {
                            //cout<<l<<" "<<j<<endl;
                            ugliness++;
                        }
                    
                }
                uans=max(uans,ugliness);
                j=l;
                l++;
            }
            cout<<uans<<" ";
        }
        cout<<endl;
    }
}
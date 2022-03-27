#include<bits\stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,l;
        cin>>N>>l;
        vector<int> v(N,0);
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
        }
        vector<int> ans; 
        for(int i=0;i<l;i++)
        {
            int count_one=0;
            for(int j=0;j<N;j++)
            {
                if(v[j]&1)
                    count_one++;
                v[j]=v[j]>>1;
            }
            //cout<<count_one<<endl;
            if(count_one>(N-count_one))
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        long long ans_val=0,i=0;
        for(auto x:ans)
        {
            ans_val+=(x*pow(2,i));
            i++;
        }
        cout<<ans_val<<endl;
    }
}
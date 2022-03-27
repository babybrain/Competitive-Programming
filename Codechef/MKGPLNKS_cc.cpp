#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,change=0;
        cin>>N;
        vector<char> s(N);
        
        for(int i=0;i<N;i++)
        {
            cin>>s[i];
            
        }
        int i=0,wgrps=0,bgrps=0;
        while(i<s.size())
        {
            if(s[i]=='W')
            {
                wgrps++;
                while(s[i]=='W')
                {
                    i++;
                }
            }
            if(s[i]=='B')
            {
                bgrps++;
                while(s[i]=='B')
                {
                    i++;
                }
            }
        }
        cout<<min(bgrps,wgrps)<<endl;
        
    }
}
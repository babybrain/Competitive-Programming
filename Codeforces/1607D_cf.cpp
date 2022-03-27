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
        vector<long long> v(N);
        vector<char> color(N);
        vector<long long> blue;
        vector<long long> red;
        for (size_t i = 0; i < N; i++)
        {
            cin>>v[i];
        }
        int blue_count=0;
        for (size_t i = 0; i < N; i++)
        {
            /* code */
            cin>>color[i];
            if(color[i]=='R')
                red.pb(v[i]);
            else
                {
                    blue.pb(v[i]);
                    blue_count++;
                }
        }
        sort(red.begin(),red.end());
        sort(blue.begin(),blue.end());
        bool check=true;
        for (int i = 0; i < blue.size(); i++)
        {
            if(blue[i]<(i+1))
            check=false;
            /* code */
        }
        for (int i = 0; i < red.size(); i++,blue_count++)
        {
            if(red[i]>(blue_count+1))
                check=false;
            /* code */
        }
        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        

        
    } 
}
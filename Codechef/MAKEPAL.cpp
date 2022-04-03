#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N,odd_count=0,flag=0;
        cin>>N;
        vector<int> v(N);
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
            if(v[i]%2!=0)
                odd_count++;
            if(v[i]==1)
                flag=1;
        }
        cout<<odd_count/2<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> v(N+1);
        v[0]=-1;
        for(int i=1;i<=N;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        bool flag=false,ans=true;
        vector<int> repeated;
        vector<int> non_repeated;
        for(size_t i=1;i<v.size();i++)
        {
            if (v[i]==v[i-1])
            {
                if (flag==false)
                    {
                        repeated.push_back(v[i]);
                        flag=true;
                    }
                else
                    ans=false;

            }
            else{
                    non_repeated.push_back(v[i]);
                    flag=false;
                }

        }
        if (ans==false)
            cout<<-1;
        else{
            int i=0,j=non_repeated.size()-1;
            while(j>=0)
            {
                if(repeated.size()!=0 && repeated[repeated.size()-1]==non_repeated[j])
                {
                    cout<<-1;
                    break;
                }
                else
                    repeated.push_back(non_repeated[j--]);
            }
            for(auto x:repeated)
                cout<<x<<" ";
        }
        cout<<endl;
    }
}

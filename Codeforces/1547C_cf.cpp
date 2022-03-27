#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int k,n,m;
        cin>>k>>n>>m;
        vector<int> v1(n),v2(m);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        int i=0,j=0;
        bool res=true;
        vector<int> result;
        for(int l=1;l<=(n+m);l++){
            if(i<v1.size() && v1[i]==0)
            {
                result.push_back(v1[i]);
                i++;
                k++;
            }

            else if(j<v2.size() && v2[j]==0)
            {result.push_back(v2[j]);
            j++;
                k++;}
            else{
                if (i<v1.size() && v1[i]<=k)
                {
                    result.push_back(v1[i]);
                    i++;
                }
                else if(j<v2.size() && v2[j]<=k)
                {
                    result.push_back(v2[j]);
                    j++;

                }
                else
                    res=false;
            }
        }
        if(res)
            {
                for(int i=0;i<result.size();i++)
                    cout<<result[i]<<" ";
                cout<<endl;
            }
        else
            cout<<"-1\n";

    }
}

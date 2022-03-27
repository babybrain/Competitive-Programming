#include<bits\stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector< vector<char> > v(n,vector<char> (m));
        bool black_check=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='B')
                    black_check=true;
            }
        }
        if(!black_check)
            cout<<-1<<endl;
        else{
            if(v[x-1][y-1]=='B')
                cout<<0<<endl;
            else{
                bool col_check=false,row_check=false;
                for(int i=0;i<m;i++)
                {
                    if(v[x-1][i]=='B')
                        col_check=true;
                }
                for(int i=0;i<n;i++)
                {
                    if(v[i][y-1]=='B')
                        row_check=true;
                }
                if(col_check||row_check)
                    cout<<1<<endl;
                else
                    cout<<2<<endl;
            }
        }
    }
}
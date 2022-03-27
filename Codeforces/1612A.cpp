#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int x,y;
        cin>>x>>y;
        bool check=false;
        for(int i=0;i<=50;i++)
        {
            bool flag=false;
            for(int j=0;j<=50;j++)
            {
                if((i+j)==(abs(x-i)+abs(y-j)))
                    {cout<<i<<" "<<j<<endl;
                    flag=true;
                    break;
                    }
            }
            if(flag)
            {
                check=true;
                break;
            }
        }
        if(!check)
        cout<<-1<<" "<<-1<<endl;
    }
}
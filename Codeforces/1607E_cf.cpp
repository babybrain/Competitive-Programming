#include<bits/stdc++.h>
using namespace std;

bool verify_coordinates(int x,int y,int n,int m)
{
   return  (x>=0 && y>=0 && x<m && y<n) ? true : false;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        string commands;
        cin>>commands;
        int ansx=1,ansy=1;
        int commands_ans=1;
        int movex=0,movey=0;
        for(auto x:commands)
        {
            if(x=='L')
                movex--;
            else if(x=='R')
                movex++;
            else if(x=='D')
                movey++;
            else if(x=='U')
                movey--;
                    
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int command_count=1;
                int x_co=j,y_co=i;
                for(auto x:commands)
                {
                    if(verify_coordinates(x_co,y_co,n,m))
                    {
                        command_count++;
                        if(command_count>commands_ans)
                        {
                            //cout<<command_count<<" "<<i<<" "<<j<<" "<<x_co<<" "<<y_co<<endl;
                            commands_ans=command_count;
                            ansx=j+1;
                            ansy=i+1;
                        }
                    }
                    else
                    {
                        command_count=1;
                        break;
                    }
                }

            }
        }
        cout<<ansy<<" "<<ansx<<endl;
    }
}
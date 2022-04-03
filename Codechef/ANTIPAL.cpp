#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        string s="";
        if(N%2)
            cout<<-1<<endl;
        else
            {
                for(int i=1;i<=N;i++)
                {
                    if(i%2)
                        s+="1";
                    else
                        s+="0";
                }
                cout<<s<<endl;
            }


    }
}
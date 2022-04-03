#include<bits/stdc++.h>
using namespace std;
int main(){
        int T;
        cin>>T;
        while(T--){
            int N,A,B;
            long long p1,p2;
            p1=0;
            p2=0;
            cin>>N>>A>>B;
            while(N--){
                string s;
                cin>>s;
                if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X'){
                    p1+=A;
                }
                else{
                    p2+=B;
                }
            }
            if(p1>p2){
                cout<<"SARTHAK\n";
            }
            else if(p2>p1){
                cout<<"ANURADHA\n";
            }
            else{
                cout<<"DRAW\n";
            }

        }
}

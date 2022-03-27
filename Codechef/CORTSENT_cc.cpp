#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
            int N;
            cin>>N;
            bool result=true;
            for(int i=0;i<N;i++){
            bool l1Check=false;
            bool l2Check=false;
            string s;
            cin>>s;
            for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='m'){
                l1Check=true;
            }
            else if(s[i]>='N' && s[i]<='Z'){
                l2Check=true;
            }
            else{
                result=false;
            }
        }
        if(l1Check&&l2Check)
            result=false;
    }
    if(result)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
}

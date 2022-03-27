#include<iostream>
using namespace std;
int main(){
    string s,ans;
    cin>>s;
    ans="";
    for(int i=0;i<s.length();i++){
        if (s[i]!='O'&&s[i]!='I'&&s[i]!='A'&&s[i]!='E'&&s[i]!='U'&&s[i]!='Y'&&s[i]!='y'&&s[i]!='o'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='u'){
            char val=s[i];
            if(val>=65 && val<=90){
                val=val+32;
            }
            ans=ans+"."+val;
        }
    }
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int start=-1;
        bool res=true;
        vector<int> alphaCheck(26,0);
        for(int i=0;i<s.length();i++){
            if (s[i]=='a')
                start=i;
            alphaCheck[s[i]-'a']++;
            if (alphaCheck[s[i]-'a']>1)
                res=false;
        }
        if (res==false || start==-1)
            cout<<"NO\n";
        else{
                int s1=start-1,s2=start+1;
                for(int i=1;i<s.length();i++){
                    char ch='a'+i;
                    if(s1>=0 && ch==s[s1])
                        s1--;
                    else if(s2<s.length() && ch==s[s2])
                        s2++;
                    else
                        res=false;

                }
                if (res==false)
                    cout<<"NO\n";
                else
                    cout<<"YES\n";
        }
    }
}

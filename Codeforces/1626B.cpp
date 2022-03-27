#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        string s,ans,ss_temp,ans_temp;
        ans_temp="";
        int x,temp,pos;
        cin>>s;
        for(int i=1;i<s.length();i++)
        {
            temp=(s[i]-'0')+(s[i-1]-'0');
            ss_temp=ans;
            ss_temp+=to_string(temp);
            for(int j=i+1;j<s.length();j++) 
            {
                ss_temp+=s[j];
            }
            //cout<<ans_temp<<" "<<ss_temp<<endl;
            if(ans_temp=="")
                ans_temp=ss_temp;
            else
                {
                    if(ss_temp.length()>ans_temp.length())
                        ans_temp=ss_temp;
                    else if(ss_temp.length()==ans_temp.length())
                    {
                        bool check_greater=false;
                        for(int j=0;j<ss_temp.length();j++)
                        {
                            if((ss_temp[j]-'0')>(ans_temp[j]-'0'))
                            {
                                check_greater=true;
                                break;
                            }
                            else if((ss_temp[j]-'0')<(ans_temp[j]-'0'))
                            {
                                break;
                            }
                        }
                        if(check_greater)
                            ans_temp=ss_temp;
                    }
                }
            
            ans+=s[i-1];
        }
        
        cout<<ans_temp<<endl;
    }
}
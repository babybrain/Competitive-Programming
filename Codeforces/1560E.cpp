#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        vector<char> order;
        vector<int> count_char(26,0);
        for(int i=s.length()-1;i>=0;i--)
        {
            if(count_char[s[i]-'a']==0)
                order.pb(s[i]);
            count_char[s[i]-'a']++;
        }
        int o_len=0,o_size=order.size();
        for(int i=0;i<o_size;i++)
        {
            o_len+=count_char[order[i]-'a']/(o_size-i);
        }
        string original="";
        for(int i=0;i<o_len;i++)
            original+=s[i];
        string res=original;
        string ord="";
        for(int i=o_size-1;i>=0;i--)
            ord+=order[i];
        string copy_original=original;
        for(auto x:ord)
        {
            string temp;
            for(int j=0;j<copy_original.length();j++)
            {
                if(copy_original[j]!=x)
                    {
                        temp+=copy_original[j];
                        res+=copy_original[j];
                    }
            }
            copy_original=temp;
        }
        if(res==s)
            cout<<original<<" "<<ord<<endl;
        else
            cout<<-1<<endl;
    }
}
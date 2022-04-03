#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        int mid=s.length()/2;
        if(s.length()%2==0){
            for(int i=mid;i<s.length();i++)
            {
                v1[s[i]-'a']++;
            }
            for(int i=0;i<mid;i++)
            {
                v2[s[i]-'a']++;
            }
        }
        else{
                for(int i=mid+1;i<s.length();i++)
            {
                v1[s[i]-'a']++;
            }
            for(int i=0;i<mid;i++)
            {
                v2[s[i]-'a']++;
            }
        }
        bool check=true;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                check=false;
                break;
            }
        }
        if(check){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}

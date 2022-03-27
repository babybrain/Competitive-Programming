#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        long long red=0,green=0;
        long long c1=0,c2=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                c1++;
            }
            else if(v[i]>1){
                c2+=2;
            }
        }
        red=(c1/2)+(c2/2);
        green=(c1/2)+(c2/2);
        cout<<red<<endl;

    }
}

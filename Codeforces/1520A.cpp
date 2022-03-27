#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int sze;
        cin>>sze;
        vector<int> v(26,0);
        vector<char> str(sze);
        bool check=true;
        for(int i=0;i<sze;i++){
            cin>>str[i];
        }
        int c=0;
        v[str[0]-'A']++;
        for(int i=1;i<sze;i++){
            v[str[i]-'A']++;
            if(str[i]==str[i-1]){
                c++;
            }
            else{
                c=0;
            }
            if((c+1)!=v[str[i]-'A']){
                check=false;
            }
        }
        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

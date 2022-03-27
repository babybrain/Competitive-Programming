#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string s;
        cin>>s;
        int cnt=0;
        vector<int> v;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                cnt++;
                v.push_back(i);
            }
        }
        if (cnt==0)
            cout<<0<<endl;
        else{
        int med1=v[v.size()/2];
        int med2=v[(v.size()-1)/2];
        int med1l1=med1-(cnt/2);
        int med1r1=med1+((cnt-1)/2);
        int med1l2=med1-((cnt-1)/2);
        int med1r2=med1+(cnt/2);

        int med2l1=med2-(cnt/2);
        int med2r1=med2+((cnt-1)/2);
        int med2l2=med2-((cnt-1)/2);
        int med2r2=med2+(cnt/2);

        int j1,j2,j3,j4;
        long long dist1=0,dist2=0,dist3=0,dist4=0;
        for(int i=0,j1=med1l1,j2=med1l2,j3=med2l1,j4=med2l2;i<s.length();i++){
            if(s[i]=='*'){
                dist1+=abs(i-j1);
                dist2+=abs(i-j2);
                dist3+=abs(i-j3);
                dist4+=abs(i-j4);
                j1++;
                j2++;
            }
        }
        cout<<min(min(dist1,dist2),min(dist3,dist4))<<endl;
        }
    }
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


long long c;
void scoreCalc(vector< vector<int> > &a,int i,int j,int n, int m){
    if (i>=n || j>=m || i<0 || j<0 || a[i][j]!=1)
        return;
    if (a[i][j]==1){
        c++;
        a[i][j]=-1;
    }
    scoreCalc(a,i+1,j,n,m);
    scoreCalc(a,i,j+1,n,m);
    scoreCalc(a,i,j-1,n,m);
    scoreCalc(a,i-1,j,n,m);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector< vector<int> > arr(n,vector<int> (m,0));
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            for(int j=0;j<s[i].length();j++){
            arr[i][j]=s[i][j]-'0';}
        }


    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                c=0;
            scoreCalc(arr,i,j,n,m);
            v.push_back(c);
            }
        }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    long long sum=0;
    for(int i=1;i<v.size();i+=2){
        sum+=v[i];
    }
    cout<<sum<<endl;
    }
    }

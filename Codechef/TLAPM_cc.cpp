#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MAX 1000

void preComputer(vector< vector<int> >& arr){
    int a=1,b=1,x;
    for(int i=0;i<MAX;i++){
            x=a;
        for(int j=0;j<MAX;j++){
            arr[i][j]=b;
            b+=(x);
            x++;
        }
        b=arr[i][0];
        a++;
        b=b+a;
    }
}

int main(){
    vector< vector<int> > arr(MAX, vector<int> (MAX));
    preComputer(arr);
    int T,x1,x2,y1,y2;
    cin>>T;
    while(T--){
        cin>>x1>>y1>>x2>>y2;
        x1--;
        x2--;
        y1--;
        y2--;
        long long ans=0;
        for(int i=x1;i<=x2;i++){
            ans+=arr[i][y1];
        }
        if(x1==x2){
            ans=arr[x1][y1];
        }
        for(int i=y1+1;i<=y2;i++){
            ans+=arr[x2][i];
        }
        cout<<ans<<endl;
    }
}

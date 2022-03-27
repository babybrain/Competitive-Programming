#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define vi vector

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N,s,v,p;
        int type=-1;
        int profit=0;
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>s>>p>>v;
            int val=floor(p/(s+1))*v;
            if (val>profit){
                profit=val;
                type=i+1;
            }
        }
        cout<<profit<<endl;

    }
}

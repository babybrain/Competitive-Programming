#include<bits/stdc++.h>
using namespace std;

int main(){

int T;
cin>>T;
while(T--){
   int N,x;
   cin>>N;
   map<int,int> m;
   long long res=0;
   for(int i=0;i<N;i++){
    cin>>x;
    x=x-(i+1);
    res+=m[x];
    m[x]++;
   }
   cout<<res<<endl;
}

}

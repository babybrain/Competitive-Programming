#include<bits/stdc++.h>
using namespace std;
int main(){
    char a,b;
    cin>>a>>b;
    map<char,int> m;
    m['R']=3;
    m['B']=2;
    m['G']=1;
    if(m[a]>m[b])
        cout<<a;
    else
        cout<<b;
}
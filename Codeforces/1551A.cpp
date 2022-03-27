#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
            long long val;
    cin>>val;
    long long c=val/3;
    long long c1=c,c2=c;
    long long diff=val-(3*c);
    if (diff==1)
        c1+=1;
    else if(diff==2)
        c2+=1;
    cout<<c1<<" "<<c2<<endl;
    }
}

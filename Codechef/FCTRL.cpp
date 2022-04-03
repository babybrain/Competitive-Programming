#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        long long val=1;
        long long zeros=0;
        while(val<=N){
                val=val*5;
            zeros+=floor(N/val);
        }
        cout<<zeros<<endl;
    }
}

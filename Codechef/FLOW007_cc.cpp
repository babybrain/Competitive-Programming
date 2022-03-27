#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int revNum=0;
        while(N!=0){
            int rem=N%10;
            N=N/10;
            revNum=(revNum*10)+rem;
        }
        cout<<revNum<<endl;
    }
}

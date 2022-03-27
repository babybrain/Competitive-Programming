#include<iostream>
using namespace std;
int main(){
int N;
cin>>N;
long long countProblems=0;
while(N--){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)>=2){
        countProblems++;
    }
}
cout<<countProblems<<endl;
}

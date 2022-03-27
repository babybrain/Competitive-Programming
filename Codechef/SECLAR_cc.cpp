#include<iostream>
using namespace std;
int threeCompare(int a,int b,int c){
    if(a>b){
        if(a<c){
            return a;
        }
        if(b>c){
            return b;
        }
    }
    else{
        if(b<c){
            return b;
        }
        if(a>c){
            return a;
        }
    }
    return c;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<threeCompare(a,b,c);
}

#include<iostream>
using namespace std;
bool valid(int a,int b,int c){
      if((a+b)>c && (b+c)>a && (a+c)>b){
        return true;
      }
    return false;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(valid(a,b,c)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

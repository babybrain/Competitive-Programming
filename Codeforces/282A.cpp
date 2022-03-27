#include<iostream>
using namespace std;
int main(){
    long long x=0;
    int N;
    cin>>N;
    while(N--){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
            if(s[i]=='+'){
                x++;
                break;
            }
            else if(s[i]=='-'){
                x--;
                break;
            }
    }
    }
    cout<<x;
}


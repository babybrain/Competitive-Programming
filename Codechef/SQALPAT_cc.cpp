#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int j=1;
    for(int i=1;i<=N;i++){
            if(i%2){
        for(int k=0;k<5;k++)
        {
            cout<<j<<" ";
            j+=1;
        }}
        else{
        int temp=j;
        for(int k=j+4;k>=temp;k--)
        {
            cout<<k<<" ";
            j+=1;
        }

        }cout<<endl;}

    }

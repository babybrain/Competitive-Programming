#include<iostream>
using namespace std;
int main(){
    int N,val;
    cin>>N>>val;
    int arr[N];
    bool check=false;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]==val)
            check=true;
    }
    if(check)
    {cout<<check;}
    else{
        cout<<"-1";
    }
}

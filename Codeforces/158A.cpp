#include<iostream>
using namespace std;
int main(){
    int N,pos;
    cin>>N>>pos;
    int *arr=new int[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    long long c=0;
    for(int i=0;i<N;i++){
        if(arr[i]>=arr[pos-1] && arr[i]>0){
            c++;
        }
    }
    cout<<c;
}

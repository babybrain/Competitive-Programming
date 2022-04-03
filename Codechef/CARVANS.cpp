#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,val1,val2,val;
        cin>>N;
        long long arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        long long speedCount=1;
        long long prevSpeed=arr[0];
        for(int i=1;i<N;i++){
            if(prevSpeed>=arr[i]){
                speedCount++;
                prevSpeed=arr[i];
            }
        }
        cout<<speedCount<<endl;
    }
}

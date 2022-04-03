#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long N;
    cin>>N;
    vector<long long> v(N);
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long revenue=INT_MIN;
    for(int i=0;i<N;i++){
        long long sum=v[i]*(N-i);
            if(sum>revenue){
                revenue=sum;
            }
    }
    cout<<revenue;
}

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int N;
    cin>>N;
    v.push_back(1);
    for(int i=2;i<=N;i++){
        if(N%i==0){
                v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

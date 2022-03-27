#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,N,i=1,count_sz=0;
    cin>>T;
    vector<int> lis;

    while(count_sz<1000)
    {
        if(i%3!=0 && i%10!=3)
           {
            lis.push_back(i);
            count_sz++;
           }
        i++;

    }
    while(T--){
        cin>>N;
        cout<<lis[N-1]<<endl;
    }
}

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        long long val;
        long long sum=0;
        cin>>val;
        long long org=val;
        long long x=val;

        while(val>9){
                val=val/10;
                sum+=9;
        }
        long long mn=INT_MAX;
        int fd;
        int nod=0;
        while(x>0){
            fd=x%10;
            x=x/10;
            nod++;
        }
        long long num=0;
        for(int i=0;i<nod;i++){
            num=(pow(10,i)*fd)+num;
        }
        if(num>org)
            sum+=(fd-1);
        else
            sum+=fd;
        cout<<sum<<endl;
        }
}

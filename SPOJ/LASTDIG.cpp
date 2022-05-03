#include<iostream>
using namespace std;
int solve(int a,int b){
    if(b==0)
        return 1;
    else if(a==0)
        return 0;
    int res=solve(a,b/2)%10;
    if(b%2)
        return ((a%10)*(res)*(res))%10;
    else
        return (res*res)%10;

}
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
}
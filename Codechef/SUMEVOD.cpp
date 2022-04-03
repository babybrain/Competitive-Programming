#include<iostream>
#include<cmath>
using namespace std;
int main(){

    long long N;
    cin>>N;
    long long oSum=(N*(2+(N-1)*2))/2;
    long long eSum=(N*(4+(N-1)*2))/2;
    cout<<oSum<<" "<<eSum;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define MAX 1000001
#define pb push_back
#define mp make_pair
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int totalCount=(c/a)+(d/b);
        cout<<totalCount<<endl;
    }

}

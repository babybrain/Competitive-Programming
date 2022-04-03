#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int calGCD(int a,int b){
    if (b==0){
        return a;
    }
    return calGCD(b,a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,Q,l,r;
        cin>>N>>Q;
        vector<int> v(N);
        vector<int> preGCD(N);
        vector<int> postGCD(N);
        for(int i=0;i<N;i++){
            cin>>v[i];
        }
        preGCD[0]=v[0];
        postGCD[N-1]=v[N-1];
        for(int i=1,j=N-2;i<N;i++,j--){
            preGCD[i]=calGCD(preGCD[i-1],v[i]);
            postGCD[j]=calGCD(postGCD[j+1],v[j]);
        }
        while(Q--){
                cin>>l>>r;
                l=l-2;
                if(l>=0&&r<=(N-1)){
                    cout<<calGCD(preGCD[l],postGCD[r])<<endl;
                }
                else if(l<0&&r<=(N-1)){
                    cout<<postGCD[r]<<endl;
                }
                else if(l>=0&&r>(N-1)){
                    cout<<preGCD[l]<<endl;
                }

        }

    }

}

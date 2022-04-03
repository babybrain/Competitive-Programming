#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int G;
        cin>>G;
        while(G--){
            int I,N,Q;
            cin>>I>>N>>Q;
            if(Q==1){
                if(I==1){
                    cout<<N/2<<endl;
                }
                else{

                            if(N%2==0){
                                cout<<N/2<<endl;
                            }
                            else{
                    cout<<(N/2)+1<<endl;}
                }
            }
            else{
                    if(I==1){
                            if(N%2==0){
                                cout<<N/2<<endl;
                            }
                            else{
                    cout<<(N/2)+1<<endl;}
                }
                else{
                    cout<<N/2<<endl;
                }

            }
        }
    }
}

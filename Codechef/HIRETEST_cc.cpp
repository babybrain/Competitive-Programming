#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int solved,partial;

        while(n--){
                solved=0;
        partial=0;
                char stat;
        for(int i=0;i<m;i++){
            cin>>stat;
            if(stat=='F')
            {
                solved++;
            }
            else if(stat=='P'){
                partial++;
            }
        }
        if((solved>=x)||((solved>=(x-1))&&(partial>=y))){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
        }
        cout<<endl;
    }
}

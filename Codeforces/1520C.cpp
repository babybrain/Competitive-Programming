#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
    int m;
    cin>>m;
    vector< vector<int> > v(m,vector<int> (m,0));
    if(m==2){
        cout<<-1<<endl;
    }
    else{
    int val=1;
    bool switc=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            v[i][j]=val;
            val+=2;
            if(m%2 && switc==false){
                if(val>(m*m)){
                    val=2;
                    switc=true;
                    }
            }
            else{
                if(val>((m*m)-1) && switc==false){
                        switc=true;
                    val=2;}
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    }

}

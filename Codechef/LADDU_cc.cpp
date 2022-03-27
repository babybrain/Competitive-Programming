#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        string nation;
        cin>>N>>nation;
        long long score=0;
        while(N--){
            string activity;
            cin>>activity;

            if(activity=="CONTEST_WON"){
                int rankC;
                cin>>rankC;
                score+=300;
                if(rankC<20){
                    score+=(20-rankC);
                }
            }
            else if(activity=="TOP_CONTRIBUTOR"){
                score+=300;
            }
            else if(activity=="BUG_FOUND"){
                int severity;
                cin>>severity;
                score+=severity;
            }
            else if(activity=="CONTEST_HOSTED"){
                    score+=50;
            }
        }
        if(nation=="INDIAN"){
            cout<<score/200<<endl;
        }
        else{
            cout<<score/400<<endl;
        }
    }
}

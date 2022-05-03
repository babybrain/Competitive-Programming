#include<bits/stdc++.h>
using namespace std;

int score(bool chance_a,bool chance_b,vector<int>& odd,vector<int>& even){
    int i=odd.size()-1,j=even.size()-1;
    bool prev_chance_a=!chance_a,prev_chance_b=!chance_b;
    int score_a=0,score_b=0;
    while((i>=0 || j>=0) && ((chance_a!=prev_chance_a)||(chance_b!=prev_chance_b)))
    {
        prev_chance_a=chance_a;
        if (chance_a && i>=0)
        {
            score_a+=odd[i];
            chance_a=!chance_a;
            i--;
        }
        else if(j>=0){
            score_a+=even[j];
            chance_a=!chance_a;
            j--;
        }
        prev_chance_b=chance_b;
        if (chance_b && i>=0){
            score_b+=odd[i];
            chance_b=!chance_b;
            i--;
        }
        else if(j>=0){
            score_b+=even[j];
            chance_b=!chance_b;
            j--;
        }
    }
    cout<<score_a<<" "<<score_b<<endl;
    return max(score_a,score_b);
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,x;
        cin>>N;
        vector<int> even,odd;
        for(int i=0;i<N;i++){
            cin>>x;
            if (x%2)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        
        cout<<max(max(score(false,true,odd,even),score(true,true,odd,even)),max(score(false,false,odd,even),score(true,false,odd,even)))<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
void max_heapify(vector<int>& v,int i){
    int left=2*i+1;
    int right=2*i+2;
    int smallest=i;
    if(left<v.size() && v[left]<v[smallest])
        smallest=left;
    if(right<v.size() && v[right]<v[smallest])
        smallest=right;
    if(smallest!=i){
        int temp=v[smallest];
        v[smallest]=v[i];
        v[i]=temp;
        max_heapify(v,smallest);
    }
}
int main(){
    int N,k;
    cin>>N>>k;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        v[i]=1;
    }
    for(int i=(N/2)-1;i>=0;i--)
        max_heapify(v,i);
    int steps=0;
    bool complete=false;
    while(v.size()>1){

            int min1=v[0];
            if(min1>=k)
                {
                    complete=true;
                    break;
                }
            v[0]=v[v.size()-1];
            v.pop_back();
            max_heapify(v,0);
            if(v.size()>0){
            int min2=v[0];

            v[0]=v[v.size()-1];
            v.pop_back();
            max_heapify(v,0);
            v.push_back(min1+(2*min2));
            steps++;
            }
            else
            {
                break;
            }

    }
    if(v.size()==1 && v[0]>=k)
        complete=true;

    if(complete)
        cout<<steps<<endl;
    else
        cout<<-1<<endl;

}

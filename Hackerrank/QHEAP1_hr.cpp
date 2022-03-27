#include<bits/stdc++.h>
using namespace std;

void insert_val(vector<int>& v){
    int i=v.size()-1;
    while(i>0 && v[i]<v[(i-1)/2])
    {
        int temp=v[i];
        v[i]=v[(i-1)/2];
        v[(i-1)/2]=temp;
        i=(i-1)/2;
    }
}


void max_heapify(vector<int>& v,int deletePos){
    int left=2*deletePos+1;
    int right=2*deletePos+2;
    int smallest=deletePos;
    if(left<v.size() && v[left]<v[smallest]){
        smallest=left;
    }
    if(right<v.size() && v[right]<v[smallest])
        smallest=right;
    if (smallest!=deletePos){
        int temp=v[smallest];
        v[smallest]=v[deletePos];
        v[deletePos]=temp;
        max_heapify(v,smallest);
    }

}
void delete_val(vector<int>& v,int val){
int deletePos;
    for(int i=0;i<v.size();i++){
        if (v[i]==val)
            {
                deletePos=i;
                break;
            }
    }
    v[deletePos]=v[v.size()-1];
    v.pop_back();
    max_heapify(v,deletePos);
}

int main(){
    vector<int> v;
    int Q;
    while(Q--){
        int option;
        cin>>option;
        if (option==1){
            int val;
            cin>>val;
            v.push_back(val);
            insert_val(v);

        }
        else if (option==2){
            int val;
            cin>>val;
            delete_val(v,val);

        }
        else{
            cout<<v[0]<<endl;
        }
    }
}

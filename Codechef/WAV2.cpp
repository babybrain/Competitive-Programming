#include<bits/stdc++.h>
#define ll long long
#define vi vector
#define pb push_back
#define mp make_pair
using namespace std;



void heapify(vi<ll>& v,int i,int N){
int l=2*i;
int r=(2*i)+1;
int largest=i;
if(l<=N && v[l]>v[i])
    largest=l;
if (r<=N && v[r]>v[largest])
    largest=r;
//cout<<N<<" "<<v[largest]<<"\n";

if(largest!=i){
    int temp=v[largest];
    v[largest]=v[i];
    v[i]=temp;
    heapify(v,largest,N);
}
}



void heap_sort(vi<ll>& v){
    int N=v.size()-1;
    for(int i=N/2;i>=1;i--){
        heapify(v,i,N);
    }
    for(int i=N;i>=1;i--){
        //cout<<v[1]<<endl;
        int key=v[1];
        v[1]=v[i];
        v[i]=key;
        heapify(v,1,i-1);

    }
}

int find_lower_bound(vi<ll>& v,int val){
    int l=1;
    int r=v.size()-1;
    int mid;
    bool found=false;
    while(l<r){
        mid=(l+r)/2;
        if(val>v[mid])
            l=mid+1;
        else if(val<v[mid])
            r=mid-1;
        else
        {
            found=true;
            break;
        }


    }
    if (!found){
        return l;}
    else
        return mid;
}

int main(){
    int N,Q,x;
    cin>>N>>Q;
    vi<ll> v(N+1,0);

    for(int i=1;i<=N;i++){
        cin>>v[i];
    }
    heap_sort(v);

    while(Q--){
        cin>>x;
        vi<ll>::iterator it=lower_bound(v.begin()+1,v.end(),x);
        int pos=it-v.begin();
        //cout<<pos;
        if (v[pos]==x)
            cout<<0<<endl;
        else{
            int positive=N-pos+1;
            int negative=pos-1;
            if(negative%2==0)
                cout<<"POSITIVE\n";
            else
                cout<<"NEGATIVE\n";
        }

    }

}

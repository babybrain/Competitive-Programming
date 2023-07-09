#include <iostream>
#include <vector>

using namespace std;

int lower_bound(int n,int x)
{
    vector<int> v;
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum += 5*i;
        v.push_back(sum);
    }
    int low = 0, high = n-1, ans=-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]<=x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid-1;
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int time_left = 240 - k;
    cout<<lower_bound(n,time_left)+1<<endl;
}
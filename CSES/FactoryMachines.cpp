#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ull;

int check(vector<ull>& arr, int n, ull x, ull k)
{
    ull count = 0;
    for(int i=0; i < n; i++)
        count += x/arr[i];
    if (count >= k)
        return 1;
    return 0;
}

int main()
{
    ull n,k;
    cin>>n>>k;
    vector<ull> arr(n);
    ull mx=0;
    for(int i=0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }
    ull lo = 0, hi = mx*k;
    ull ans = 0;
    while(lo <= hi)
    {
        ull mid = lo + (hi - lo)/2;
        if (check(arr, n, mid, k))
        {
            ans = mid;
            hi=mid-1;
        }
        else
            lo=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}
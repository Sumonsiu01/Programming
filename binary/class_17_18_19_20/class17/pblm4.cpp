//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbjZMM1FsYjctYU5vODBaUE5GRDBoQTdpVDNtd3xBQ3Jtc0tsNUpBQmJhQlJzU0JBdFMxYkw3SmU1Y3o2aENRMFF3aVBuME1HRzNUX0NZZ1VrX3VKSWowMnRYaHdEa01fNFN5dkhZRDZabzhHZ2Y3c1ZfVHFQeWY4VkJtMllkT285RHJFU2Q1RnNhNmIxTGlvNE9GTQ&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FSABBIRGAME
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
long long arr[mx];
int n;

bool check(long long val)
{
    for(int i=0; i<n; i++)
    {
        val+=arr[i];
        if(val<=0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    for(int tc = 1; tc<=t; tc++)
    {
        cin>>n;
        for(int i =0; i<n; i++)cin>>arr[i];
        long long l = 0,r = 1e11,ans;
        while(l<=r)
        {
            long long mid = (l + r)>>1;
            if(check(mid))
            {
                ans = mid;
                r = mid-1;
            }
            else
                l = mid+1;
        }
        cout<<ans<<endl;
    }

}

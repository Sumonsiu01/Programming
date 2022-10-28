#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e6+123;
int N;
long long a[mx];
bool check(long long val)
{
    for(int i = 0; i<N; i++)
    {
        val+=a[i];
        if(val<=0)return 0;
    }
    return 1;
}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        cin>>N;
        for(int i=0; i<N; i++)
            cin>>a[i];
        long long l = 1,r = 1e14,ans;
        while(l<=r)
        {
            long long mid = (l+r)>>1;
            if(check(mid))
            {
                ans = mid;
                r = mid -1;
            }
            else l = mid+1;
        }
        cout<<ans<<endl;
    }
}

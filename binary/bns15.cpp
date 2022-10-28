//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqblFva3E0YlBmWWZDTlFId19EcndtWWwwTVlLQXxBQ3Jtc0ttN2NQaFVQQnYwUl9pdFg5R2RWcEhYeDdsU2kyM2dNWkJBekN6WHprTGVBd0pnMENMdDgyZkE2a3M1T1Zob3pMUmNjNWwwcTJrTXRUamRIbmp2NUwxa0VvWTRpZTJrRzdQdkhmQ2tRVEYyWmgwdHdHMA&q=https%3A%2F%2Fwww.hackerearth.com%2Fpractice%2Falgorithms%2Fsearching%2Fbinary-search%2Fpractice-problems%2Falgorithm%2Fmonks-encounter-with-polynomial%2F
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long a,b,c;
long long getval(long long x)
{
    return (a*x*x)+b*x+c;
}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        long long k;
        cin>>a>>b>>c>>k;
        long long l =0,r = 1e6,ans =-1;
        while(l<=r)
        {
            long long mid = (l+r)>>1;
            if(getval(mid)>=k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout<<ans<<endl;
    }
}

//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbFM5bENZWnF5VDdKdkY3SGRwNWNNWUQxZTZDQXxBQ3Jtc0traVZrZVJYVHd0bnBjR1duOVZnVi16WVEwVEhpNWRnT2hZeHBKR2dtMWlVWGNMc2FfZmF1akFlUzAteXJvR3JDSWZiQTdZdGpUYmdkcmJPX1AxTWhJZEl6Wkc3VHJ3WE0wRTBrZ05KOUF4aHNHR1g5cw&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FMATHLOVE%2F
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long getsum(long long n)
{
    return (n*(n+1))>>1;
}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        long long y;
        cin>>y;
        long long l = 1, r= 1e5,ans = -1;
        while(l<=r)
        {
            long long mid = (l+r)>>1;
            if(getsum(mid) == y)
            {
                ans = mid;
                break;
            }
            else if(getsum(mid)<y)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        if(ans ==-1)cout<<"NAI"<<endl;
        else
            cout<<ans<<endl;
    }

}

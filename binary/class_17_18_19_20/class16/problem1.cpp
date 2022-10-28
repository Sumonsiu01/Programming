//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqazNzVzBQTWFmSmp6UnA0eFA5bmxvTExZZkhNZ3xBQ3Jtc0tuMzk5SHpfMWhkSEZvV0RrTkc3cXJPeGJ2UEZmbjQ1TG9uQW0xU3hMcjNjai1CUkxiT2NOR3VJanpTb25pV0VWcndfQUhBdHM4dFNIb0hTRkk3V2s1U1BoTXR1U1U0Z0ltbHFQU2xwLVpNQU1KTWY1WQ&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FMATHLOVE%2F
#include<bits/stdc++.h>
using namespace std;

long long getsum(long long n)
{
    return (n*(n+1))>>1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long y,ans=-1;
        cin>>y;
        long long l=1,r = 1e5;
        while(l<=r)
        {
            long long mid = (l+r)>>1;
            if(getsum(mid) == y)
            {
                ans = mid;

                break;
            }
            if(getsum(mid)<y)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        if(ans == -1)
                cout<<"NAI"<<endl;
            else
                cout<<ans<<endl;

    }

}

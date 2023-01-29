#include<bits/stdc++.h>
using namespace std;
/*
https://codeforces.com/contest/1516/problem/B
solved
*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        long long pre[n+1];

        for(int i = 1;i<=n;i++)
        {
            cin>>a[i];
        }
        pre[0] = 0;

        for(int i = 1;i<=n;i++) pre[i] = pre[i-1] ^ a[i];

        int ans = 0;

        for(int i = 1;i<=n;i++)
        {
            int p = pre[i];
            int q = pre[n] ^ pre[i];
            if(p == q)
            {
                ans = 1;
                break;
            }

        }
        for(int i = 1;i<=n;i++)
        {
            int m = pre[i];
            for(int j = i+1;j<=n;j++)
            {
                int l = pre[i] ^ pre[j];
                int o = pre[j] ^ pre[n];
                if(m == l && l == o)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if(ans == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}

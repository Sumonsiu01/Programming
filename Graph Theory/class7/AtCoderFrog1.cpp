//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbTdjQ2dwbG01TVY2T2VxeWFrcWo5WmRvbmFDQXxBQ3Jtc0tuY3NYMVNPTFlkdnFLNU1wXzRWeDVqMXNuX0djbGtsdWNvaTMwX1lMcXl3YldrRkZCN2lsMzFTRkRBUmpGYlBCWDhsX2FSVjk4c1NYaW4yS25ndTBBUFJKNmE2Rnpha19RTUJKR0JBbXJtNm1naXB3NA&q=https%3A%2F%2Fatcoder.jp%2Fcontests%2Fdp%2Ftasks%2Fdp_a&v=aOhxE9kcUn8
#include<bits/stdc++.h>

using namespace std;
#define endl '\n'

const int mx = 1e5+123;

int dp[mx];
int h[mx],n;


int solve(int i)
{
    if(i == n) return 0;

    if(dp[i] != -1) return dp[i];

    int ret1 = 2e9,ret2  = 2e9;

    if(i+1<=n) ret1 = abs(h[i] - h[i+1]) + solve(i+1);
    if(i+2<=n)  ret2 = abs(h[i] -  h[i+2])+ solve(i+2);

    dp[i] = min(ret1,ret2);
    return dp[i];

}

int main()
{
    cin>>n;
    for(int i = 1 ; i<=n; i++)cin>>h[i];
    memset(dp,-1,sizeof(dp));
    cout<<solve(1)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int dp[1000];//The complexity of this problem will O(n) we also can sat that the size of this 'dp' array
int f(int n)
{
    if(n==0) return 0;
    if(n==1)  return 1;
    if(dp[n] != -1) return dp[n];

    return dp[n] = (f(n-1)+f(n-2));

}

int main()
{
    for(int i = 0;i<1000;i++) dp[i] = -1;

    cout<<f(5)<<endl;

}

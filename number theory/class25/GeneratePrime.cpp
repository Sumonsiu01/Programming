#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
vector<int>prime;

bool isprime[mx];

void primegen(int n)
{
    memset(isprime,1,sizeof(isprime));
    isprime[1] = 0;

    for(int i = 2;i<=n;i++)
    {
        for(int j = i+i;j<=n;j+=i)
        {
            isprime[j] = 0;
        }
    }
    for(int i = 2;i<=n;i++)
    {
        if(isprime[i] == 1)
            prime.push_back(i);
    }
}
int main()
{
    primegen(20);
    for(auto u:prime)cout<<u<<" ";
}

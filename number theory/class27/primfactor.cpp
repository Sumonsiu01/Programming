#include<bits/stdc++.h>
using namespace std;


const int mx = 1e7+123;

bool isprime[mx];
vector<int>prime;

void primegen(int n)
{
    for(int i = 3;i<=n;i+=2)isprime[i] = 1;

    int sq = sqrt(n);

    for(int i = 3;i<=sq;i+=2)
    {
        if(isprime[i] == 1)
        {
            for(int j = i*i;j<=n;j+=(i+i))
            isprime[j] = 0;
        }
    }

    isprime[2] = 1;
    prime.push_back(2);
    for(int  i = 3;i<=n;i+=2)
    {
        if(isprime[i] == 1)
            prime.push_back(i);
    }

}
vector<long long> factor(long long n)
{
    vector<long long>fect;
    for(auto p:prime){
        if(1LL*p*p>n)break;
    if(n%p == 0)
    {
        while(n%p == 0)
        {
            fect.push_back(p);
            n = n/p;
        }
    }

    }
    if(n>1)fect.push_back(n);
    return fect;

}
int main()
{
    primegen(1e7);

    long long n;
    cin>>n;
    vector<long long>ans = factor(n);

    for(auto u:ans)
        cout<<u<<" ";

}

#include<bits/stdc++.h>
using namespace std;

const int mx = 1e7+123;

vector<int>prime;
bool isprime[mx];

void primegen(long long n)
{
    for(int i = 3;i<=n;i+=2) isprime[i] = 1;

    long long sq = sqrt(n);

    for(int i = 3;i<=sq;i+=2)
    {
        if(isprime[i] == 1)
        {
            for(int j = i*i;j<=n;j+=(i+i))
                isprime[j] =  0;
        }
    }
    isprime[2] = 1;

    prime.push_back(2);
    for(int i = 3;i<=n;i+=2)
    {
        if(isprime[i] == 1 )
        {
            prime.push_back(i);
        }
    }
}
int NOD(long long n)
{
    int ret = 1;
    for(auto p:prime)
    {
        int cnt = 1;
        if(1ll*p*p>n)break;
        if(n%p == 0)
        {
            while(n%p == 0){
            n/=p;
            cnt++;
            }
        }
        ret*=cnt;
    }
    if(n>1)
        ret*=2;
    return ret;
}
int main()
{
    long long lim = 1e6;

    primegen(lim);

    int t;
    cin>>t;
    while(t--){
            long long n;
            cin>>n;
    long long ans = NOD(n);
    cout<<ans<<endl;
    }
}

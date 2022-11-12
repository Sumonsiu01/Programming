/* Bismillahir Rahmanir Rahim */
//solved Alhamdulillah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define ll long long
#define mem(a,b) memset(a, b, sizeof(a) )
#define endl '\n'
#define pb push_back
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e6+123;
vector<long long>prime;
bitset<mx>isprime;


void primegen(int n)
{
     n += 100;
    for(int i = 3;i<=n;i+=2) isprime[i] = 1;

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

    for(int i = 3;i<=n;i+=2)
    {
        if(isprime[i] == 1)
            prime.push_back(i);
    }
}

int NOD(long long n)
{
    int ret = 1;

    for(auto p:prime)
    {
        if(1ll*p*p>n)break;
        if(n%p == 0)
        {
            int cnt = 1;
            while(n%p == 0)
            {
                n/=p;
                cnt++;
            }
            ret*=cnt;
        }
    }
    if(n>1)
    {
        ret*=2;
    }
    return ret;
}
int main()
{
    optimize();
    int lim = 1e6;
    primegen(lim);

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<NOD(n)<<endl;
    }
}




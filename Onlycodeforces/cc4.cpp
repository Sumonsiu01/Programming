/* Bismillahir Rahmanir Rahim */
#include<bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/COUNTP
//solved
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

int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int cnt = 0,sum = 0;
        for(int i = 0;i<n;i++)
        {
            int p;
            cin>>p;
            if(p%2 != 0)
                cnt++;
                else
                    sum++;
        }
        if(cnt % 2 == 0 && cnt!=0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}






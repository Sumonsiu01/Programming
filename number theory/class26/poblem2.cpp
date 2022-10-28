//https://codeforces.com/contest/776/problem/B
//solved
#include<bits/stdc++.h>
using namespace std;


const int mx = 1e6+123;
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

    for(int i = 3;i<=n;i+=3)
    {
        if(isprime[i] == 1)
            prime.push_back(i);
    }
}
int main()
{
    int lim = 1e6+123;
    primegen(lim);
    int n;
    cin>>n;
    (n == 1 || n == 2)? cout<<1<<endl : cout<<2<<endl;

    for(int i = 2;i<=n+1;i++)
    {
        if(isprime[i] == 1)
        {
            cout<<1<< " ";

        }
        else cout<<2<<" ";
    }
    return 0;
}

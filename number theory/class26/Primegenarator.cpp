//we are generating prime here in most efficient way

#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
bool isprime[mx];
vector<int>prime;

void primegen(int n)
{
    for(int i = 3; i<=n; i+=2)isprime[i] = 1;
    int sq = sqrt(n);
    for(int i = 3; i<=sq; i+=2)
    {
        if(isprime[i] == 1)
        {
            for(int j = i*i; j<=n; j+=(i+i))
                isprime[j] = 0;
        }
    }
    isprime[2] = 1;
    prime.push_back(2);
    for(int i = 3; i<=n; i+=2)
    {
        if(isprime[i] == 1)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    primegen(100);
    for(auto u:prime)cout<<u<<endl;
}

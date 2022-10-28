#include<bits/stdc++.h>
using namespace std;

//https://www.spoj.com/problems/HS08PAUL/
//solved

const int mx = 1e7+123;

bool isprime[mx];
int ans[mx];

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

    for(int i = 3;i<=n;i+=2)
    {
        if(isprime[i] == 1)
            prime.push_back(i);
    }
}

int main()
{
    int lim  = 1e7;

    primegen(lim);

    for(int x = 1;x<=3200;x++)
    {
        for(int y = 1;y<=60;y++)
        {
            int d = (x*x) + (y*y*y*y);

            if(d>lim)continue;
            if(isprime[d] == 1)ans[d] = 1;
        }
    }

    for(int i = 1;i<=lim;i++)ans[i]+=ans[i-1];


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }

    /*input
4
1
2
10
9999999
output
0
1
2
13175


*/
}

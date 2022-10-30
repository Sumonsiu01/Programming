#include<bits/stdc++.h>
using namespace std;


const int mx = 1e7+123;

vector<int>prime;

bool isprime[mx];


void primegen(long long n)
{
    for(int i = 3;i<=n;i+=2) isprime[i] = 1;

    int sq = sqrt(n);

    for(int i = 3;i<=sq;i+=2)
    {
        if(isprime[i] == 1){
        for(int j = i*i;j<=n;j+=(i+i))
        isprime[j] = 0;
        }

    }
    isprime[2] = 1;

    prime.push_back(2);

    for(int i = 3;i<=n;i+=2)
    {
        if(isprime[i] == 1)
        {
            prime.push_back(i);
        }
    }
}

vector<long long > fector(long long n)
{

    vector<long long>fect;

    for(auto u:prime)
    {
      if(n%u == 0)
      {
          fect.push_back(u);
          while(n%u == 0)
          {
              n = n/u;
          }
      }
    }
    if(n>1)
        fect.push_back(n);

    return fect;
}


int main()
{
    int lms = 1e7;

    primegen(lms);


    long long n;
    while(cin>>n)
    {
        if(n == 0)break;

        n = abs(n);

        vector<long long>ans = fector(n);


        if(ans.size() <= 1)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<ans.back()<<endl;
        }
    }
}

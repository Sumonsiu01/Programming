#include<bits/stdc++.h>
using namespace std;


//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3B0SFd1a1F1dTJickJ0aFBObEtoSlYwWHdqd3xBQ3Jtc0tsckk0VVFlU3NEMFJYVkQwSWlsMG1lNmpmQURtQ2s5TmplUmxjUURaWmJQeHJFN3loa1Y0UmtXQUl5STFCNTAwOFM5Rldmak81YnRHNW5IZzdnN1pDS3B2WEdubENUWmpzQ1ZuTWRPZTJVZ1BSdWZiUQ&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FTDPRIMES%2F&v=z0ooswSYaME

const int mx = 1e8+123;
//bitset<mx>isprime;
bool isprime[mx];
vector<int>prime;

void primegen(int n)
{
    for(int i = 3; i<=n; i+=2)isprime[i] = 1;

    int sq = sqrt(n);
    for(int i = 3; i<= sq; i+=2)
    {
        if(isprime[i] == 1)
        {
            for(int j=i*i; j<=n; j+=(i+i))
                isprime[j] = 0;
        }
    }

    isprime[2] = 1;
    prime.push_back(2);
    for(int i = 3; i<=n; i+=2)
    {
        if(isprime[i] == 1)
            prime.push_back(i);
    }
}

int main()
{
    int lim = 1e8;

    primegen(lim);
    for(int i = 0; i<prime.size(); i+=100)
        if(prime[i]<lim)
            cout<<prime[i]<<endl;
}

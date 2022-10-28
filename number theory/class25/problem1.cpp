//https://vjudge.net/problem/UVA-543
//Alhamdulillah solved
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6;

bool isprime[mx];

vector<int>prime;

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
    isprime[2] = 0;
    for(int i = 3;i<=n;i++)
    {
        if(isprime[i] == 1)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    int n;
    primegen(1e6);

    while(cin>>n)
    {
        if(n == 0)break;

        int p1 = -1,p2 = -1,diff = -1;

        for(auto u:prime){
            if(u>n)break;
        int tp1 = u,tp2 = n - u;
        if(tp2>2 && isprime[tp2] == 1)
        {
            if(abs(tp1- tp2)>diff)
            {
                diff = abs(tp1 - tp2);
                p1 = tp1;
                p2 = tp2;
            }
        }
        }
        if(p1 == -1)
            cout<<"Goldbach's conjecture is wrong."<<endl;
        else
            cout<<n<<" = "<<p1 <<" + " <<p2<<endl;
    }

}

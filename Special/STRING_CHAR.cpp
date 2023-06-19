/*** Bismillahir Rahmanir Rahim ***/
#include<bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/contest/1335/problem/B

it is special code bacause instead of string data type we use char in line no 60 but when we use string datatype
it is showing that TLE
*/
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
    for(int i = 3; i<=n; i+=2) isprime[i] = 1;

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
        int n,a,b;
        cin>>n>>a>>b ;

        char s[] = "abcdefghijklmnopqrstuvwxyz";
        string ans ;
        for(int i = 0;i<b;i++)
        {
            ans[i] = s[i];
        }

        int k = 0;
        while(n--)
        {
            cout<<ans[k];
            k++;
            if(k == b)
                k = 0;
        }
        cout<<endl;
    }


}






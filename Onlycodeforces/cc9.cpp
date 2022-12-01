/* Bismillahir Rahmanir Rahim */
//solved ALHAMDULILLAH
//https://www.codechef.com/problems/LAPIN
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

int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1 = "",s2 = "";
        int len = s.length();
        if(len%2 != 0)
        {
            for(int i = 0;i<len/2;i++)
            s1+=s[i];
            sort(s1.begin(),s1.end());
            for(int j = len/2+1;j<len;j++)
            s2 +=s[j];

            sort(s2.begin(),s2.end());

            if(s1 == s2)
                cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i = 0;i<len/2;i++)
            s1+=s[i];
            for(int j = len/2;j<len;j++)
            s2 +=s[j];

            if(s1 == s2)
                cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }
    }

}





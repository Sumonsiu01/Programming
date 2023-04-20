
/*** Bismillahir Rahmanir Rahim ***/
#include<bits/stdc++.h>
using namespace std;

/*
https://www.codechef.com/problems/CHEFCHR

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
    primegen(1e4);
    optimize();
   int t;
   cin>>t;
   string str = "chef";
   sort(str.begin(),str.end());
   while(t--)
   {
       //cout<<str.size()<<endl;
       string s;
       cin>>s;
       int cnt = 0;
       //string ans;
       for(int i = 0;i<s.length();i++)
       {
         string ans = s.substr(i,4);
         sort(ans.begin(),ans.end());
         if(ans == str)
            cnt++;
       }
       if(cnt == 0)
       {
           cout<<"normal"<<endl;
       }
       else
        cout<<"lovely "<<cnt<<endl;

   }
}





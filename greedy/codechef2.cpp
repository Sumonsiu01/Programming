//https://www.codechef.com/problems/CARSELL

//Sumon see it when you get time it is a awsome problem
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007


int main()

{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i = (ll)0; i<n; i++)cin>>v[i];
        sort(v.begin(),v.end(),greater<ll>());
        ll ans = 0;

        for(ll i = (ll)0; i<n; i++)
        {
            ans += max((ll)0,v[i] - i);//if we not type cast here it will say us wrong answer
            ans%=mod; // we use to make the answer within the limit of 'mod' which is given on the question
        }
        cout<<ans<<endl;

    }
    return 0;
}

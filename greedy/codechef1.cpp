//https://www.codechef.com/problems/RAMDEV

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll l,b,n,ans = 0;
    cin>>l>>b;
    cin>>n;

    for(ll i = 0;i<n;i++)
    {
        ll L,B;
        cin>>L>>B;

        ans+=max((L/l)*(B/b),(L/b)*(B/l));

    }
    cout<<ans<<endl;

    /*
    look we use here long long instead of int and answer in correct but when we use int data type it's showing wrong
    only because the answer is getting bigger which cross the range of integer that is why we use long long instead of integer
    */

}

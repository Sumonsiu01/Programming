/*** Bismillahir Rahmanir Rahim ***/

#include<bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/231/C

#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();

    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());

    long long prefix[n];

    prefix[0] = v[0];

    for(int i = 1;i<n;i++)
    {
        prefix[i] = v[i] + prefix[i - 1];

    }

    long long first = 0,last = 0;
    long long ans = 0,occur;

    while(first<n)
    {
        while(last<n)
        {
            long long sum = prefix[last]  - prefix[first] + v[first];
            long long total = v[last] * (last  - first  + 1);
            if(total - sum> k)
            {
                break;
            }
            last++;
        }
        last--;
        if(ans<last - first + 1)
        {
            ans = last - first+1;
            occur = v[last];
        }
        first++;
    }
    cout<<ans<<" "<<occur<<endl;
}





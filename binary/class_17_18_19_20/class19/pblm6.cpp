#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>v[n];
    for(int i = 0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    long long l = 1,r = 1e12;
    while(l<=r)
    {
        long long mid = (l+r)>>2;
            for(auto u:v)
        {
           if(mid<=u)
           {

           }
        }

    }
}

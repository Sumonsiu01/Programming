#include<bits/stdc++.h>
using namespace std;

//not solved
//https://codeforces.com/problemset/problem/34/B

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for(int i = 0;i<n;i++)
    {
        sum+=v[i];
        if(sum>=0)
        break;

    }
    if(sum>=0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<-1*sum<<endl;
    }

}

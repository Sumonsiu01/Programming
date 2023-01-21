#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int w;
    vector<pair<int,int>>v;

    for(int i = 0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.rbegin(),v.rend());
    cin>>w;
    int ans = 0;
    for(auto p:v)
    {
        if(w>=p.second)
        {
            ans+=p.first;
            w-=p.second;
            continue;
        }
        else
        {
            double vw = (double)p.first/p.second;
            ans+=vw*w;
            w = 0;
            break;
        }
    }
    cout<<ans<<endl;
}

/*
5
21 7
24 4
12 6
40 5
30 6
20
*/

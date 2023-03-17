#include<bits/stdc++.h>
using namespace std;

/*
https://www.hackerrank.com/challenges/big-sorting/problem?isFullScreen=true
*/
int main()
{
    int n;
    cin>>n;

    vector<pair<int,string>>v;
    for(int i = 0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back({s.length(),s});
    }

    sort(v.begin(),v.end());

    for(auto u:v)
        cout<<u.second<<endl;
}

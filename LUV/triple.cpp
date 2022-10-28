#include<bits/stdc++.h>
using namespace std;
//solved
//https://codeforces.com/problemset/problem/1669/B
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>cnt;
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool p = true;
        for(int i = 0;i<n-2;i++)
        {
            if(v[i] == v[i+1] && v[i] == v[i+2])
            {
                cout<<v[i]<<endl;
                p = false;
                break;
            }
        }
        if(p)cout<<"-1"<<endl;
    }
}

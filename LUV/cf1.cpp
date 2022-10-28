#include<bits/stdc++.h>
using namespace std;

//solved
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

            int p;
            cin>>p;
            cnt[p]++;
        }

        for(auto u:cnt)
            v.push_back(u.second);

            sort(v.begin(),v.end(),greater<int>());
            cout<<n - v[0]<<endl;
    }
}

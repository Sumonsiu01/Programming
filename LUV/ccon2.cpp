#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int flag = 0;
        cin>>n;
        vector<int>v;
        map<int,int>cnt;
        for(int i = 0;i<n;i++)
        {
            int p;
            cin>>p;
            cnt[p]++;
        }
        for(auto u:cnt)
        {
            v.push_back(u.second);
        }
        for(int i = 0;i<n;i++)
        {
            if(v[i]>=2)
            {
                flag = 1;
            }
        }
        if(flag == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

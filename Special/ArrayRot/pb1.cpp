#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,d;
    cin>>n>>d;
    int l = d%n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];

    vector<int>temp;
    vector<int>ans;

    for(int i = 0;i<l;i++)
    {
        temp.push_back(v[i]);
    }

    for(int i = l;i<n;i++)
    {
        ans.push_back(v[i]);
    }
    for(auto u:temp)
    {
        ans.push_back(u);
    }

    for(auto u:ans)
        cout<<u<< " ";
    cout<<endl;


}

